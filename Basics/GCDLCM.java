import java.util.Scanner;
public class GCDLCM {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n1=sc.nextInt();
        int n2=sc.nextInt();
        int ogn1=n1,ogn2=n2;
        while(n1%n2!=0){
            int rem=n1%n2;
            n1=n2;
            n2=rem;

        }
        System.out.println("GCD is : "+n2);
        System.out.println("LCM is : "+((ogn1*ogn2)/n2));

    }
}
