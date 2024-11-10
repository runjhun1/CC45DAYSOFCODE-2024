#include <stdio.h>

int main() {
    int T;  // Number of test cases
    scanf("%d", &T);  // Read number of test cases

    while (T--) {
        int A, B, C, D;
        // Read four angles of the quadrilateral
        scanf("%d %d %d %d", &A, &B, &C, &D);
        
        // Check if opposite angles sum to 180
        if (A + C == 180 && B + D == 180) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}

