package pacote;

class CaseSwitch {
    public static void main(String[] args) {

        String days = "Terça";

        switch (days) {
            case "Domingo":
                System.out.println("Sunday");
                break;
            case "Segunda":
                System.out.println("Monday");
                break;
            case "Terça":
                System.out.println("Tuesday");
                break;
            case "Quarta":
                System.out.println("Wednesday");
                break;
            case "Quinta":
                System.out.println("Thursday");
                break;
            case "Sexta":
                System.out.println("Friday");
                break;
            case "Sabado":
                System.out.println("Saturday");
                break;
            default:
                days = "Invalid day";
                break;
        }
    }
    }