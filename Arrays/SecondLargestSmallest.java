package Arrays;
import java.util.Scanner;
import java.util.ArrayList;
public class SecondLargestSmallest {
    static int secondLargest(ArrayList<Integer>arr){
        int max=arr.get(0);
        int secondMax=-1;
        for(Integer i:arr){
            if(i>max){
                secondMax=max;
                max=i;
            }
            else if(i<max && i>secondMax)
                secondMax=i;
        }
        return secondMax;
    }
    static int secondSmallest(ArrayList<Integer>arr){
        int min=arr.get(0);
        int secondMin=Integer.MAX_VALUE;
        for(Integer i:arr){
            if(i<min){
                secondMin=min;
                min=i;
            }
            else if(i!=min && i<secondMin)
                secondMin=i;
        }
        return secondMin;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n=sc.nextInt();
        ArrayList<Integer> arr = new ArrayList<Integer>();
        for(int i=0;i<n;i++)
            arr.add(sc.nextInt());
        System.out.println("The second Largest Element "+secondLargest(arr));
        System.out.println("The second Smallest Element "+secondSmallest(arr));
    }
}
