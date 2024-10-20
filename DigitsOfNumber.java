import java.util.Scanner;
public class DigitsOfNumber {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n=sc.nextInt();
        String num = Integer.toString(n);
        System.out.println(num);
        char[] num1=num.toCharArray();
        for(char i : num1)
            System.out.println(i);
        }
    }

