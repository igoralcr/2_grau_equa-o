import java.util.Scanner;

public class EquacaoSegundoGrau {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        while (true) {
            System.out.print("Digite o coeficiente a: ");
            double a = input.nextDouble();

            System.out.print("Digite o coeficiente b: ");
            double b = input.nextDouble();

            System.out.print("Digite o coeficiente c: ");
            double c = input.nextDouble();

            if (a == 0) {
                System.out.println("O coeficiente a não pode ser zero.");
                continue;
            }

            double delta = Math.pow(b, 2) - 4 * a * c;

            if (delta < 0) {
                System.out.println("A equação não possui raízes reais.");
            } else if (delta == 0) {
                double x = -b / (2 * a);
                System.out.println("A equação possui uma raiz real: " + x);
            } else {
                double x1 = (-b + Math.sqrt(delta)) / (2 * a);
                double x2 = (-b - Math.sqrt(delta)) / (2 * a);
                System.out.println("A equação possui duas raízes reais: " + x1 + " e " + x2);
            }

            System.out.print("Deseja sair? (s/n): ");
            String sair = input.next();

            if (sair.equalsIgnoreCase("s")) {
                break;
            }
        }

        input.close();
    }
}