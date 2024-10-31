package Arrays;
import java.util.Scanner;
import java.util.ArrayList;
import java.util.HashSet;
public class RemoveDuplicates {
    static ArrayList<Integer> RemoveDupOne(ArrayList<Integer>arr){
        HashSet<Integer> set1= new HashSet<Integer>();
        for(Integer i : arr)
            set1.add(i);
        arr.clear();
        for(Integer i : set1)
            arr.add(i);
        return arr;
    }
    static int RemoveDupTwo(ArrayList<Integer>arr){
        int i=0,j=1;
        while(j<arr.size()){
            if(arr.get(i)==arr.get(j))
                j++;
            else{
                i+=1;
                arr.set(i,arr.get(j));
                j++;
            }
        }
        return i+1;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        ArrayList<Integer> arr = new ArrayList<Integer>();
        for(int i=0;i<n;i++)
            arr.add(sc.nextInt());
        System.out.println("The array is : ");
//        arr=RemoveDupOne(arr);
//        for(Integer i :arr)
//            System.out.print(i+" ");
        int i=RemoveDupTwo(arr);
        for(int j=0;j<i;j++)
            System.out.print(arr.get(j)+" ");
    }
}
