package pacote;

class TestaIdade {
    public static void main(String[] args){
        //imprime idade test
        int idade = 20;
        System.out.println("Idade: " + idade);

        //gera uma idade no ano seguinte
        String idadeNoAnoQueVem;
        //idadeNoAnoQueVem = idade ++;
        idadeNoAnoQueVem = idade > 20 ? "verdade" : "falso" ;
        
        

        //imprime idade no ano seguinte 
        System.out.println("Idade no ano que vem: " + idadeNoAnoQueVem);
    }
}
