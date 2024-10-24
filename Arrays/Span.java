package Arrays;
import java.util.Scanner;
public class Span {
    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);
        int[] arr = new int[5];
        for(int i=0;i<5;i++)
            arr[i] = sc.nextInt();
        int max=arr[0],min=arr[0],span;
        for(int i=0;i<5;i++){
            if(max<arr[i])
                max=arr[i];
            if(min>arr[i])
                min=arr[i];
        }
        span=max-min;
        System.out.println("The span of the array is "+span);
    }
}
