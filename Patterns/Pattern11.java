package Patterns;
import java.util.Scanner;
public class Pattern11 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int sNum=1;
        for(int i=0;i<n;i++){
            for(int j=n-1-i;j>=0;j--)
                System.out.print("  ");
            int num=sNum;
            for(int j=0;j<=i;j++){
                System.out.print(num+" ");
                num++;
            }
            num-=2;
            for(int j=0;j<i;j++){
                System.out.print(num--+" ");
            }
            System.out.println();
            sNum++;
        }
    }
}
