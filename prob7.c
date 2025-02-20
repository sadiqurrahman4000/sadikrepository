#include <stdio.h>

int find_max(int arr[], int n) {
    int max = arr[0]; // Initialize max with the first element

    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    return max;
}

int main() {
    int arr[] = {10, 5, 20, 8, 15};
    int n = sizeof(arr) / sizeof(arr[0]);

    int max_value = find_max(arr, n);
    printf("The maximum value in the array is: %d\n", max_value);

    return 0;
}