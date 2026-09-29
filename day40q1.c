//Count the number of characters in a string without using strlen().
#include <stdio.h>

int main() {
    char str[100];
    int count = 0;
    int i = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {
        if (str[i] == '\n') {
            break;
        }
        count++;
        i++;
    }

    printf("Number of characters: %d\n", count);
    return 0;
}
