#include <stdio.h>
#include <math.h>

// Function to check if a number is prime
int is_prime(int n) {
    if (n <= 1) {
        return 0; // 1 and numbers less than 1 are not prime
    }
    if (n <= 3) {
        return 1; // 2 and 3 are prime
    }
    if (n % 2 == 0 || n % 3 == 0) {
        return 0; // Eliminate even numbers and multiples of 3
    }
    
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) {
            return 0; // Not prime
        }
    }
    return 1; // Prime
}

int main() {
    int T;
    scanf("%d", &T); // Read number of test cases

    for (int i = 0; i < T; i++) {
        int N;
        scanf("%d", &N); // Read each number to test
        if (is_prime(N)) {
            printf("yes\n"); // If prime, print "yes"
        } else {
            printf("no\n");  // If not prime, print "no"
        }
    }

    return 0;
}

