import java.util.Scanner;

public class b20 {
    public static void main(String[] args) {
        System.out.println("tong uoc");
        int n = new Scanner(System.in).nextInt();
        long tong=0;
        for( int i=1;i<=n;i++)
        {
            if(n%i==0)
            {
                System.out.println(i+ " ");
            }
        }
    }
}
