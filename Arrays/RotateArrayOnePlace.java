package Arrays;
import java.util.Scanner;
import java.util.ArrayList;
public class RotateArrayOnePlace {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        ArrayList<Integer> arr = new ArrayList<Integer>();
        int n=sc.nextInt();
        for(int i=0;i<n;i++)
            arr.add(sc.nextInt());
        int temp=arr.get(0);
        for(int i=0;i<n-1;i++)
            arr.set(i,arr.get(i+1));
        arr.set(n-1,temp);
        for(Integer i:arr)
            System.out.print(i+" ");
    }
}
