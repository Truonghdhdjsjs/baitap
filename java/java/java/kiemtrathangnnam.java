import java.util.Scanner;

public class kiemtrathangnnam {
    public static void main(String[] args) {
        System.out.println("kiem tra thang nam");
        int nam = new Scanner(System.in).nextInt();
        int thang = new Scanner(System.in).nextInt();
        switch (thang) {
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12:
                 System.out.println("thang co 31 ngay");
                break;
            case 4:
            case 6:
            case 9:
            case 11:
                System.out.println(" thang co 30 ngay");

                break;
            case 2:
                if ((nam%400==0)||(nam%4==0 && nam%100!=0)) {
                    System.out.println(" thang co 29 ngay");
                    break;
                }
                else
                {
                    System.out.println("thang co 28 ngay");
                    break;
                }
            default:
                System.out.println(" ket qua khong hop le");
                break;
        }
    }
}
