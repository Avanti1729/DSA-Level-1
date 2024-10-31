package Arrays;
import java.util.Scanner;
public class RotateArrayDPlaces {
    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);
        int n=sc.nextInt();
        int arr[]=new int[n];
        for(int i=0;i<n;i++)
            arr[i]=sc.nextInt();
        int d = sc.nextInt();
        d=d%n;
        int temp[]=new int[d];
        for(int i=0;i<d;i++)
            temp[i]=arr[i];
        int i=0,tmp=0;
        while(d<n){
            arr[i]=arr[d];
            i++;
            d++;
        }
        while(i<n){
            arr[i]=temp[tmp];
            i++;
            tmp++;
        }
        for(int k: arr)
            System.out.print(k+" ");
    }
}
