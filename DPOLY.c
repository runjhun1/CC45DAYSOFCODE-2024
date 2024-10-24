#include <stdio.h>

int main() {
    int T; // Number of test cases
    scanf("%d", &T);
    
    while (T--) {
        int N; // Number of terms in the polynomial
        scanf("%d", &N);
        
        int coefficients[N]; // Array to store coefficients
        for (int i = 0; i < N; i++) {
            scanf("%d", &coefficients[i]);
        }
        
        int degree = -1; // Initialize degree to -1
        
        // Find the highest index with a non-zero coefficient
        for (int i = 0; i < N; i++) {
            if (coefficients[i] != 0) {
                degree = i; // Update degree
            }
        }
        
        // Output the degree for this test case
        printf("%d\n", degree);
    }
    
    return 0;
}


