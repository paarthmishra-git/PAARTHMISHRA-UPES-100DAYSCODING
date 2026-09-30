//Replace all spaces in a string with hyphens.
#include <stdio.h>

int main() {
    char str[100];
    int i;
    

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            str[i] = '-';
        }
    }

    printf("Modified string: %s\n", str);

    return 0;
}
