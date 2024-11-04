#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T); // Read the number of test cases

    while (T--) {
        int N;
        scanf("%d", &N); // Read the number of bits for each test case

        // Check if N is a multiple of 4
        if (N % 4 == 0) {
            printf("Good\n"); // It's a Good program
        } else {
            printf("Not Good\n"); // It's not a Good program
        }
    }

    return 0;
}

