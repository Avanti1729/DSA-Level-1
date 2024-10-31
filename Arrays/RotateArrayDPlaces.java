package Arrays;
import java.util.Scanner;
import java.util.Arrays;
public class RotateArrayDPlaces {
    static int[] RotateDPlaces(int arr[],int d,int n){
        int temp[]=new int[d];
        for(int i=0;i<d;i++)
            temp[i]=arr[i];
        int i;
        for(i=0;d<n;i++,d++){
            arr[i]=arr[d];
        }
        for(int tmp=0;i<n;i++,tmp++){
            arr[i]=temp[tmp];
        }
        return arr;
    }
    static int[] RotatePlaces(int arr[],int d,int n){
        reverse(arr,0,d-1);
        reverse(arr,d,n-1);
        reverse(arr,0,n-1);
        return arr;
    }
    private static void reverse(int[] arr, int start, int end) {
        while (start < end) {
            // Swap the elements
            int temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;
            start++;
            end--;
        }
    }
    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);
        int n=sc.nextInt();
        int arr[]=new int[n];
        for(int i=0;i<n;i++)
            arr[i]=sc.nextInt();
        int d = sc.nextInt();
        d=d%n;
        arr=RotatePlaces(arr,d,n);
        for(int k: arr)
            System.out.print(k+" ");
    }
}
