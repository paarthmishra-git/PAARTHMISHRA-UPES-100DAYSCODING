//Find the first repeating lowercase letter in a string.
#include <stdio.h>

int main(void) {
    char str[1000];
    int frequency[26] = {0};
    int i;
    char firstRepeating = '\0';

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            frequency[str[i] - 'a']++;
        }
    }

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z' &&
            frequency[str[i] - 'a'] > 1) {
            firstRepeating = str[i];
            break;
        }
    }

    if (firstRepeating != '\0') {
        printf("First repeating lowercase alphabet: %c\n", firstRepeating);
    } else {
        printf("No repeating lowercase alphabet found.\n");
    }

    return 0;
}
