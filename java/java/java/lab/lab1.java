import java.util.Scanner;

public class lab1{
    public static void main(String[] args) {
        System.out.println("nhap ho ten diem");
        Scanner sc  = new Scanner(System.in);
        String hoten = sc.nextLine();
        System.out.println("Nhap diem so");
        Double diemtrungbinh = sc.nextDouble();
        System.out.println(hoten+" "+diemtrungbinh);
    }
}