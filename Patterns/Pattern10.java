package Patterns;
import java.util.Scanner;
public class Pattern10 {
    public static int fact(int n){
        int fact=1;
        for(int i=1;i<=n;i++)
            fact*=i;
        if(n==0)
            return 1;
        return fact;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        for(int i=0;i<n;i++){
            int val=1;
            for(int j=0;j<=i;j++){
                val=fact(i)/(fact(j)*fact(i-j));
                System.out.print(val+" ");
            }
            System.out.println();
        }
    }
}
