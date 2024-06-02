import java.util.Scanner;

public class b7 {
    public static void main(String[] args) {
        System.out.println("Nhập phần số nguyên");
        long a= new Scanner(System.in).nextLong();
        long b = new Scanner(System.in).nextLong();
        System.out.println((long)b/a);
        System.out.printf("%.2f",(double)b/a);
    }
}
