#include <stdio.h>

int main() {
    int X;
    
    // Reading the input points
    scanf("%d", &X);
    
    // Check if the team qualifies
    if (X >= 12) {

        printf("yes\n");

    } else {
         printf("No\n");
    }
      return 0;
}

