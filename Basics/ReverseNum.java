import java.util.Scanner;
public class ReverseNum {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int rem=0,revNum=0;
        while(n!=0){
            rem=n%10;
            revNum=revNum*10+rem;
            n/=10;
        }
        System.out.println("Reversed Number : "+revNum);
    }
}
