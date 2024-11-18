#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);  // Read the number of test cases

    while (T--) {
        int N, X;
        scanf("%d %d", &N, &X);  // Read the number of players (N) and the number of tiles (X)

        // Check if X is divisible by N
        if (X % N == 0) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}

