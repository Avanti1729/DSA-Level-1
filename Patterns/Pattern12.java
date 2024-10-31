package Patterns;
import java.util.Scanner;
public class Pattern12 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        for(int i=0;i<n;i++){
            for(int j=0;j<=i;j++)
                System.out.print((j+1)+" ");
            for(int j=0;j<(2*n-2*i-2);j++)
                System.out.print("  ");
            for(int j=n+i-(n-1);j>0;j--)
                System.out.print(j+" ");
            System.out.println();
        }
    }
}
