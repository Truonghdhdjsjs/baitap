import java.util.Scanner;

public class b14 {
    public static void main(String[] args) {
       
        System.out.println("Nhap so a, va b");
        Scanner sc = new Scanner(System.in);
        int x,y,z,t;
        x = sc.nextInt();
        y = sc.nextInt();
        z = sc.nextInt();
        t = sc.nextInt();
        System.out.println(Math.max(x, y));
        System.out.println(Math.min(z, t));
      
    }
}
