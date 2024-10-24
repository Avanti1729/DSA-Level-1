package Arrays;
import java.util.Scanner;
public class LinearSearch {
    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);
        int[] arr = new int[5];
        for(int i=0;i<5;i++)
            arr[i] = sc.nextInt();
        int key=sc.nextInt();
        for(int i=0;i<5;i++) {
            if (key == arr[i]) {
                System.out.println("Element found at position " + i);
                return;
            }
        }
        System.out.println("Element not found");
    }
}
