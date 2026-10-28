//Write a Program to take an integer array nums. Print an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i]. The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.

#include <stdio.h>

int main() {
    int nums[100], n, product;

    printf("Enter array size: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &nums[i]);

    for (int i = 0; i < n; i++) {
        product = 1;

        for (int j = 0; j < n; j++) {
            if (i != j)
                product *= nums[j];
        }

        printf("%d", product);
        if (i < n - 1)
            printf(", ");
    }

    printf("\n");
    return 0;
}
