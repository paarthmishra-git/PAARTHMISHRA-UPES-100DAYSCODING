//Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.

#include <stdio.h>

int main() {
    int arr[100], n, k, sum, max;

    printf("Enter array size: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter k: ");
    scanf("%d", &k);

    if (k <= 0 || k > n) {
        printf("Invalid k\n");
        return 0;
    }

    max = arr[0];

    for (int i = 0; i <= n - k; i++) {
        sum = 0;

        for (int j = i; j < i + k; j++)
            sum += arr[j];

        if (i == 0 || sum > max)
            max = sum;
    }

    printf("Maximum sum: %d\n", max);

    return 0;
}
