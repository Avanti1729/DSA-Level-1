import java.util.Scanner;
public class PrimeRange {
    public static void PrimeRanges(int n){
        int count=0;
        for(int i=2;i<Math.sqrt(n);i++) {
            if (n%i==0){
                count++;
                break;
            }
        }
        if(count==0 && n!=1)
            System.out.print(n+" ");
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int low=sc.nextInt();
        int high=sc.nextInt();
        for(int i=low;i<=high;i++)
            PrimeRanges(i);
    }
}
