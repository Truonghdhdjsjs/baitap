import java.util.Scanner;

public class b13 {
    public static void main(String[] args) {
        //Tìm số đảo ngược
        System.out.println("Tìm Số đảo ngược");
        int n= new Scanner(System.in).nextInt();
        int tam=n;
        long gt=0;
        while (tam!=0) {
           gt=gt*10+tam%10;
           //tong=tong+gt;
           tam=tam/10;
        }

        System.out.println(gt%10);
    }
}
