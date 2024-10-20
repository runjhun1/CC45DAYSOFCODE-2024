import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef
{
    public static void main (String[] args) throws java.lang.Exception
    {
        Scanner scanner = new Scanner(System.in);
        int T = scanner.nextInt(); 
        for (int t = 0; t < T; t++) {
            int N = scanner.nextInt(); 
            int A = scanner.nextInt(); 
            int B = scanner.nextInt(); 
            
          
            int rounds = (int)(Math.log(N) / Math.log(2));
            
          
            int totalTime = rounds * A + (rounds - 1) * B;
            
            System.out.println(totalTime); 
        }
        scanner.close(); 
    }
}
