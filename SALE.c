#include <stdio.h>

int main() {
    int T;  // Number of test cases
    scanf("%d", &T);  // Read number of test cases

    // Iterate over each test case
    for (int i = 0; i < T; i++) {
        int A, B, C;
        // Read the prices of the three items
        scanf("%d %d %d", &A, &B, &C);

        // Calculate the total price and find the minimum price
        int total_price = A + B + C;
        int min_price = A;  // Assume A is the minimum initially

        // Compare A, B, and C to find the minimum
        if (B < min_price) min_price = B;
        if (C < min_price) min_price = C;

        // Output the amount Chef has to pay (total price - min price)
        printf("%d\n", total_price - min_price);
    }

    return 0;
}

