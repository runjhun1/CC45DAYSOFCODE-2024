#include <stdio.h>

int main() {
    int T;  // Number of test cases
    scanf("%d", &T);  // Read the number of test cases

    // Loop through each test case
    for (int t = 0; t < T; t++) {
        int N, X, P;
        // Read N, X, and P for each test case
        scanf("%d %d %d", &N, &X, &P);

        // Calculate Chef's score
        int score = 4 * X - N;

        // Output "PASS" if Chef's score is greater than or equal to P, else "FAIL"
        if (score >= P) {
            printf("PASS\n");
        } else {
            printf("FAIL\n");
        }
    }

    return 0;
}

