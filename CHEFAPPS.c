#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);  // Read number of test cases
    
    while (T--) {
        int S, X, Y, Z;
        scanf("%d %d %d %d", &S, &X, &Y, &Z);  // Read S, X, Y, Z for each test case
        
        int available_space = S - (X + Y);  // Calculate the available space
        
        // Case 1: If available space is enough for the new app
        if (available_space >= Z) {
            printf("0\n");
        }
        // Case 2: If deleting one app is enough
        else if ((S - Y) >= Z || (S - X) >= Z) {
            printf("1\n");
        }
        // Case 3: If deleting both apps is necessary
        else {
            printf("2\n");
        }
    }
    
    return 0;
}

