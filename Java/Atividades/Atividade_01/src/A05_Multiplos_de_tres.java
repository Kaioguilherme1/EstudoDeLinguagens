//auth: Kaio Guilherme
// Date 03/12/2021

public class A05_Multiplos_de_tres {
    public static void main(String[] args){
        int multiplo = 0, i=0;

        System.out.println("Multiplos De Tres");
        do{
            multiplo++;
            
            if((multiplo % 3) == 0){
                System.out.println(multiplo);
                i++;
            }

        }while(i <5);
    }

}
