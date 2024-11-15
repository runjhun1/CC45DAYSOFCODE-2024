#include <stdio.h>

void calculate_total_duration(int T, int test_cases[T][3]) {
    for (int i = 0; i < T; i++) {
        int N = test_cases[i][0];
        int A = test_cases[i][1];
        int B = test_cases[i][2];
        
        // Number of odd-indexed episodes (1, 3, 5, ...)
        int odd_count = (N + 1) / 2;  // equivalent to ceiling(N / 2)
        
        // Number of even-indexed episodes (2, 4, 6, ...)
        int even_count = N / 2;  // equivalent to floor(N / 2)
        
        // Calculate total duration
        int total_duration = (odd_count * B) + (even_count * A);
        
        // Output the result for the current test case
        printf("%d\n", total_duration);
    }
}

int main() {
    int T;
    
    // Reading the number of test cases
    scanf("%d", &T);
    
    // Array to hold all the test case values
    int test_cases[T][3];
    
    // Reading all test cases
    for (int i = 0; i < T; i++) {
        scanf("%d %d %d", &test_cases[i][0], &test_cases[i][1], &test_cases[i][2]);
    }
    
    // Calculate and print the total duration for each test case
    calculate_total_duration(T, test_cases);
    
    return 0;
}

