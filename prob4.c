#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Function to reverse a string
void reverse_string(char str[]) {
    int length = strlen(str);
    for (int i = 0; i < length / 2; i++) {
        char temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }
}

int main() {
    int n;

    // Input the number of strings
    printf("Enter the number of strings: ");
    scanf("%d", &n);
    getchar(); // Consume newline character after entering the number

    char strings[n][100];

    // Input n strings
    printf("Enter %d strings (each can include spaces):\n", n);
    for (int i = 0; i < n; i++) {
        fgets(strings[i], 100, stdin);
        strings[i][strcspn(strings[i], "\n")] = '\0'; // Remove newline character
    }

    // Reverse each string
    for (int i = 0; i < n; i++) {
        reverse_string(strings[i]);
    }

    // Print reversed strings
    printf("\nReversed strings:\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", strings[i]);
    }

    return 0;
}
