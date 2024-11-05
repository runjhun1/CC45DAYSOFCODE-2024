#include <stdio.h>

int main() {
    int T;  // Number of test cases
    scanf("%d", &T);  // Read number of test cases
    
    while (T--) {
        int A, B, C;
        scanf("%d %d", &A, &B);  // Read the two numbers A and B
        
        // Calculate the third number C needed to make the sum 21
        C = 21 - A - B;
        
        // Check if C is between 1 and 10
        if (C >= 1 && C <= 10) {
            printf("%d\n", C);  // If C is valid, print it
        } else {
            printf("-1\n");  // If C is not valid, print -1
        }
    }
    
    return 0;
}
