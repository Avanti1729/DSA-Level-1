import java.util.Scanner;
public class DigitFrequency {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int num=sc.nextInt();
        int dig=sc.nextInt();
        int freq=0,temp=num;
        while(num!=0){
            int rev=num%10;
            if(rev==dig)
                freq++;
            num/=10;
        }
        System.out.println("The frequency of "+dig+" in the number "+temp+" is "+freq);
    }
}
