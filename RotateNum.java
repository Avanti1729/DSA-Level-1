import java.util.Scanner;
public class RotateNum {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        String num=Integer.toString(n);
        System.out.print("Rotation : ");
        int rot=sc.nextInt();
        String myStr = num.substring(num.length()-rot,num.length());
        num = myStr+num.replace(myStr,"");
        n=Integer.parseInt(num);
        System.out.println(n);
    }
}
