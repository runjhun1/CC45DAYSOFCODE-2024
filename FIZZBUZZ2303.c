#include <stdio.h>

int main() {
    int T; // Number of test cases
    scanf("%d", &T); // Read the number of test cases

    while (T--) {
        int N; // Number of players Chef is considering
        scanf("%d", &N); // Read N

        // Calculate the number of choices for captain and vice-captain
        int choices = N * (N - 1);
        
        // Print the result
        printf("%d\n", choices);
    }

    return 0;
}

