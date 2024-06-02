package b2;

import java.util.Scanner;

public class b2 {
   public static void main(String[] args) {
        int x = new Scanner(System.in).nextInt();
        int y = new Scanner(System.in).nextInt();
        char c = new Scanner(System.in).nextLine().charAt(0);
        float f= new Scanner(System.in).nextFloat();
        double d =new Scanner(System.in).nextDouble();
        System.out.println(x);
        System.out.println(y);
        System.out.println(c);
        System.out.printf("%.2f",f);
        System.out.printf("%.9f",d);
   }
}
