#include <stdio.h>

int main() {
    int T, N;
    
    // Read the number of test cases
    scanf("%d", &T);
    
    while (T--) {
        // Read the number of gifts for the current test case
        scanf("%d", &N);
        
        // Calculate the minimum coins Chef will need
        int full_sets = N / 5;       // Number of full sets of 5 gifts
        int remaining_gifts = N % 5; // Remaining gifts after full sets
        
        // Total coins Chef needs
        int coins = full_sets * 4 + remaining_gifts;
        
        // Output the result for this test case
        printf("%d\n", coins);
    }
    
    return 0;
}

