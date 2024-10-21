import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner sc = new Scanner(System.in);
		int T = sc.nextInt(); // Read the number of test cases
		while(T-- > 0) {
		    int N = sc.nextInt(); // Read N
		    int X = sc.nextInt(); // Read X
		    int Y = sc.nextInt(); // Read Y
		    
		    // Check if Y is a multiple of X
		    if (Y % X == 0) {
		        // Calculate k such that k * X = Y
		        int k = Y / X;
		        // Check if 0 <= k <= N
		        if (k <= N) {
		            System.out.println("YES");
		        } else {
		            System.out.println("NO");
		        }
		    } else {
		        System.out.println("NO");
		    }
		}
		sc.close();
	}
}
