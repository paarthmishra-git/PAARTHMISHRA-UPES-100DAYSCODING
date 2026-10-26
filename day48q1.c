//Write a Program to take a positive integer n as input, and find the pivot integer x such that the sum of all elements between 1 and x inclusively equals the sum of all elements between x and n inclusively. Print the pivot integer x. If no such integer exists, print -1. Assume that it is guaranteed that there will be at most one pivot integer for the given input.

#include <stdio.h>

int main() {
    int n, x = -1;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        if (i * (i + 1) / 2 == (n * (n + 1) / 2) - (i * (i - 1) / 2)) {
            x = i;
            break;
        }
    }

    printf("%d\n", x);

    return 0;
}
