import java.util.Scanner;

public class kiemtrachainuoc {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        long n=sc.nextLong();
        long a=sc.nextLong();
        long b=sc.nextLong();
        if (a<=(double)b/2) {
            System.out.println(n*2);
        }
        else
        {
                if(n%2==0)
                {
                        System.out.println(n/2*b);
                }
                else
                {
                        System.out.println((n-1)/2*b+a);
                }
        }
    }
}
