#include <stdio.h>
#include "float_vector.h"

int main(){
    floatVector *vec = create(10);
    print(vec);
    append(vec, 4.6);
    append(vec, 5.6);
    append(vec, 9.6);
    print(vec);
    printf("valor do indice: %.2f \n",get(vec, 1));
    set(vec, 1, 10.6);
    print(vec);
}