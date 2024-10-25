#include <stdio.h>
#include <string.h>

int main() {
    int T; // Number of test cases
    scanf("%d", &T);

    while (T--) {
        int N; // Number of problems
        scanf("%d", &N);
        
        // Initialize counters
        int count_start38 = 0;
        int count_ltime108 = 0;

        // Read each contest code and count occurrences
        for (int i = 0; i < N; i++) {
            char code[9]; // To hold the contest code, max length is 8 + null terminator
            scanf("%s", code);
            if (strcmp(code, "START38") == 0) {
                count_start38++;
            } else if (strcmp(code, "LTIME108") == 0) {
                count_ltime108++;
            }
        }

        // Print the counts
        printf("%d %d\n", count_start38, count_ltime108);
    }

    return 0;
}


