import java.util.Scanner;
public class isPrime {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int count=0;
        for(int i=2;i<Math.sqrt(n);i++) {
            if (n%i==0){
                count++;
                break;
            }
        }
        if(count==0 && n!=1)
            System.out.println("Prime");
        else
            System.out.println("Not a Prime");
    }
}
