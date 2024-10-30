package Arrays;
import java.util.Scanner;
import java.util.ArrayList;
public class CheckSorted {
    static boolean CheckSorted(ArrayList<Integer>arr){
        for(int i=1;i<arr.size();i++){
            if(arr.get(i-1)>arr.get(i))
                return false;
        }
        return true;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        ArrayList<Integer> arr = new ArrayList<Integer>();
        for(int i=0;i<n;i++)
            arr.add(sc.nextInt());
        System.out.println("The array is sorted : "+CheckSorted(arr));
    }
}
