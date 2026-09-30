//Find the first repeating lowercase alphabet in a string.
#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    int freq[26] = {0};
    char first = '\0';

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // count frequency of each lowercase letter
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '\n' || str[i] == '\r') {
            continue;  // ignore newline from fgets
        }

        if (islower((unsigned char)str[i])) {
            freq[str[i] - 'a']++;
        }
    }

    // find the first letter (in string order) that repeats
    for (int i = 0; str[i] != '\0'; i++) {
        if (islower((unsigned char)str[i]) && freq[str[i] - 'a'] > 1) {
            first = str[i];
