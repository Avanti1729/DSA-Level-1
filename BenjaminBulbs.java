/* There are 100 bulbs where each of them are switched off and on ... how
many bulbs be left on in the end.
 */

/* So if factors of a number is even - they remain off
but if not they remain on.
Perfect Squares have odd number of factors as the square root doesn't get repeated.
 */
import java.util.Scanner;
public class BenjaminBulbs {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        for(int i=1;i*i<=n;i++){
            System.out.print(i*i+" ");
        }
    }
}
