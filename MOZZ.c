#include <stdio.h>
#include <math.h>

int main() {
    int T;
    // Read the number of test cases
    scanf("%d", &T);

    while (T--) {
        int X, Y, R;
        
        // Read the values for X, Y, and R
        scanf("%d %d %d", &X, &Y, &R);
        
        // Calculate the number of extra sticks Chef ate
        int extra_sticks = R / 30;
        
        // Total number of sticks Chef ate
        int total_sticks = X + extra_sticks;
        
        // Calculate the number of plates Chef could have ordered
        // We use the ceil function to round up the division
        int plates = (int) ceil((double) total_sticks / Y);
        
        // Output the result
        printf("%d\n", plates);
    }

    return 0;
}

