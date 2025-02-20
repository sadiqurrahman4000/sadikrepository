#include <stdio.h>
#include <ctype.h>

// Function to convert a string to uppercase
void to_uppercase(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        str[i] = toupper(str[i]);
    }
}

int main() {
    char myString[100];

    printf("Enter a string: ");
    scanf("%99s", myString);

    to_uppercase(myString);

    printf("Uppercase string: %s\n", myString);

    return 0;
}
