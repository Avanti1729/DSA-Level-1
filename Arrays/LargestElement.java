package Arrays;
import java.util.ArrayList;
import java.util.Scanner;
public class LargestElement {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n=sc.nextInt();
        ArrayList<Integer> arr= new ArrayList<Integer>();
        for(int i=0;i<n;i++)
            arr.add(sc.nextInt());
        int max= arr.get(0);
        for(Integer i : arr){
            if(max<i)
                max=i;
        }
        System.out.println("The Largest Element in Array is "+max);

    }
}
