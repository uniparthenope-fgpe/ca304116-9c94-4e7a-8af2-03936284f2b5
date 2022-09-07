import java.util.Scanner;

public class solution {
	 public static void main(String[] args) {
        final double PERC_P = 0.10;
        final double PERC_S = 0.15;
        final double PERC_D = 0.25;
        double percSconto;
        double iC, sconto, fC;
        char category;

        Scanner s = new Scanner(System.in);
        iC = s.nextDouble();

        category = s.next().toUpperCase().charAt(0);

        switch(category) {
            case 'P':
                percSconto = PERC_P;
                break;
            case 'S':
                percSconto = PERC_S;
                break;
            case 'D':
                percSconto = PERC_D;
                break;
            default:
                percSconto = 0.0;
        }
        
        sconto = percSconto * iC;
        fC = iC - sconto;

        System.out.format("%.2f%n", fC);
	}
}