//Find Missing Number (1 to N)
#include <stdio.h>

// Uses the formula for sum of 1 to N, then subtracts actual array sum
int main() {
    int arr[] = {1, 2, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]) + 1; // N = 6, array has N-1 elements
    int expectedSum = n * (n + 1) / 2;
    int actualSum = 0;

    for (int i = 0; i < n - 1; i++)
        actualSum += arr[i];

    printf("Missing number: %d\n", expectedSum - actualSum);
    return 0;
}
