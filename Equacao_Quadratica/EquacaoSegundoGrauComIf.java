import java.util.Scanner;

public class EquacaoSegundoGrauComIf {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        System.out.println("Este programa resolve equações de segundo grau. Exemplo abaixo:");
        System.out.println("ax\u00B2 + bx + c = 0\n");
        System.out.print("Digite o primeiro termo (a):");
        double a = scan.nextDouble();
        System.out.print("\nDigite o segundo termo (b):");
        double b = scan.nextDouble();
        System.out.print("\nDigite o segundo termo (c):");
        double c = scan.nextDouble();

        double x1 = ((-b) + Math.sqrt( Math.pow(b,2) - 4*a*c )) / (2*a);
        double x2 = ((-b) - Math.sqrt( Math.pow(b,2) - 4*a*c )) / (2*a);



//        System.out.println("\nResposta:");
        System.out.printf("A equação '%.2fx\u00B2 + (%.2f)x + (%.2f) = 0' ", a, b, c);

        if ( (Math.pow(b,2)-(4*a*c)) < 0) {
            System.out.print("não possui raízes reais.");
        } else if ((Math.pow(b,2)-(4*a*c)) == 0) {
                System.out.println("tem apenas uma solução: x = " + x1);
        } else System.out.println("tem duas soluções: x = " + x2 + " e x = " + x1);
    }
}
