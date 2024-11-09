#include <stdio.h>
#include <math.h>

int main() {
    int T;
    scanf("%d", &T);  // Read the number of test cases
    
    while (T--) {
        int N, A, B;
        scanf("%d %d %d", &N, &A, &B);  // Read the values for N, A, and B

        // Calculate the number of rounds, which is log2(N)
        int rounds = log2(N);
        
        // Total time is the sum of all round times + break times
        int totalTime = rounds * A + (rounds - 1) * B;

        // Output the result for the current test case
        printf("%d\n", totalTime);
    }
    
    return 0;
}

