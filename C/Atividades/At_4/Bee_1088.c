#include<stdio.h>

int intercala (int v[],int p,int q,int r){
    int i,j,k = 0,count = 0;
    int w[r-p];
    i = p;
    j = q;
    while(i < q && j < r){
        if(v[i] <= v[j])
            w[k++] = v[i++];
        else
        {
            w[k++] = v[j++];
            count += q-i;
        }
    }
    while(i < q) w[k++] = v[i++];
    while(j < r) w[k++] = v[j++];
    for (i = p; i < r; i++)
        v[i] = w[i-p];


    return count;
}

int count_mergesort (int v[],int p,int r){
    int q,ind_esq = 0,ind_dir = 0,inter = 0;
    if(p < r-1)
    {
        q = (p+r)/2;
        ind_esq = count_mergesort(v,p,q);
        ind_dir = count_mergesort(v,q,r);
        inter = intercala(v,p,q,r);

    }
    return ind_esq + ind_dir + inter;
}
int vet[100000];

int main()
{
    int i,n,s,l;
    while(1)
    {
        scanf("%d",&n);
        if (n == 0) break;
        for (i = 0; i < n; i++)
            scanf("%d",&vet[i]);
        int j = count_mergesort(vet,0,n);
 if(j%2==0){
  printf("Carlos\n");
} else{
  printf("Marcelo\n");
}
            
    }

return 0;
}