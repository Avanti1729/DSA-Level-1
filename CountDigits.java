import java.util.Scanner;
public class CountDigits {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n=sc.nextInt();
        int dig=0;
        while(n!=0){
            n/=10;
            dig++;
        }
        System.out.println("Number of Digits in the number : "+dig);
    }
}
