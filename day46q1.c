//Print all substrings of a string

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int n;

    printf("Enter a string: ");
    scanf("%99s", str);

    n = strlen(str);

    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            for (int k = i; k <= j; k++)
                printf("%c", str[k]);

            printf("\n");
        }
    }

    return 0;
}
