import java.util.Scanner;

public class kiemtrachucai {
    public static void main(String[] args) {
        System.out.println("kiem tra chu cai dung sau");
        Scanner sc = new Scanner(System.in);
        char n = sc.nextLine().charAt(0);
        if (n>='A'&& n<'Z') {
            n+=32;
            n+=1;
            System.out.println(n);
        }
        else if (n>='a'&&n<'z') {
            System.out.println(n);
        }
        else if (n=='Z'||n=='z') {
            System.out.println("a");
        }
    }
}
