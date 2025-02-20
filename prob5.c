#include <stdio.h>

int main() {
    int n, i, num, min, max, sum = 0;

    printf("Enter the number of integers: ");
    scanf("%d", &n);

    // Initialize min and max with the first input number
    printf("Enter the first integer: ");
    scanf("%d", &num);
    min = max = num;
    sum += num;

    // Input remaining numbers and update min, max, and sum
    for (i = 1; i < n; i++) {
        printf("Enter integer %d: ", i + 1);
        scanf("%d", &num);

        if (num < min) {
            min = num;
        }

        if (num > max) {
            max = num;
        }

        sum += num;

        // Print odd index values
        if (i % 2 == 1) {
            printf("Odd index value: %d\n", num);
        }
    }

    printf("Minimum value: %d\n", min);
    printf("Maximum value: %d\n", max);
    printf("Sum of all numbers: %d\n", sum);

    return 0;
}