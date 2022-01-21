public class ProgramaMatematica {

    public static void main(String[] args) {
        // TODO Auto-generated method stub

        // int[][] arraybi = new int[2][2];
        //
        // Scanner entrada = new Scanner(System.in);

        // for (int i = 0; i < arraybi.length; i++) {
        // for (int j = 0; j < arraybi.length; j++) {
        //
        // System.out.printf("Entre como o elemento arraybi[%d][%d]: ", i+1, j+1);
        // arraybi[i][j] = entrada.nextInt();
        // }
        // }

        Matematica operacao = new Matematica();

        System.out.println("2 ^ 3 = " + operacao.potencia(2, 3));
        System.out.println("16 ^ 0.5 = " + operacao.potencia(16, 0.5));
        System.out.println("2 + 3 = " + operacao.soma(2, 3));
        System.out.println("2 + 3 + 7 = " + operacao.soma(2, 3, 7));
        System.out.println("2 * 3 * 11 * 128 = " + operacao.multiplicao(2, 3, 11, 128));
        System.out.println("10123.34 - 1233 - 344 - (-98.8) = " + operacao.subtracao(10123.34, 1233, 344, -98.8));
        System.out.println("2 / 3 = " + operacao.divisao(3, 2));
        System.out.println("(2 + 3 + 7)/2 = " + operacao.divisao(2, 2, 3, 7));

        System.out.println("\nValores do Array arraybi:");

        // for (int i = 0; i < arraybi.length; i++) {
        // for (int j = 0; j < arraybi.length; j++) {
        //
        // System.out.printf("[%d][%d]: %d\n", i+1, j+1, arraybi[i][j]);
        // }
        // }
    }
}