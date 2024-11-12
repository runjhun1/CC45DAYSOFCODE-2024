#include <stdio.h>

int main() {
    int T; // Number of test cases
    scanf("%d", &T);

    // Loop over each test case
    for (int i = 0; i < T; i++) {
        int X, Y;
        scanf("%d %d", &X, &Y);

        // Calculate the water required for one person (2 buckets, each of Y liters)
        int water_per_person = 2 * Y;

        // Calculate the maximum number of people that can bathe
        int max_people = X / water_per_person;

        // Output the result
        printf("%d\n", max_people);
    }

    return 0;
}

