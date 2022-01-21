

public class Matematica {

	public double potencia(double base, int expoente) {

		double resultado = 1;

		for (int n = 0; n < expoente; n++) {

			resultado *= base;
		}

		return resultado;
	}

	public double potencia(double base, double expoente) {

		return Math.pow(base, expoente);
	}

	public double soma(double... n1) {

		double res = 0;

		for (double i : n1) {

			res += i;
		}

		return res;
	}

//	public double soma(double n1, double n2) {
//
//		return n1 + n2;
//	}
//
//	public double soma(double n1, double n2, double n3) {
//
//		return n1 + n2 + n3;
//	}
//
//	public double soma(double n1, double n2, double n3, double n4) {
//
//		return n1 + n2 + n3 + n4;
//	}
//
//	public double soma(double n1, double n2, double n3, double n4, double n5) {
//
//		return n1 + n2 + n3 + n4 + n5;
//	}

	public double subtracao(double... n1) {

		double res = 0;
		int ctrol = 0;

		for (double i : n1) {
			
			if (ctrol == 0) {
				res = i;
				ctrol = 1;
			} else {
				res -= i;
			}
		}

		return res;
	}

	public double multiplicao(double... n1) {

		double res = 1;

		for (double i : n1) {

			res *= i;
		}

		return res;
	}

	public double divisao(double d, double... n) {

		double res = 0;

		for (double i : n) {

			res += i;
		}
		return res/d;
	}
}
