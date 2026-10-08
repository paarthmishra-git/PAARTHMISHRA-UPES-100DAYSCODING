//Write a C program to print a matrix in spiral order.

#include <stdio.h>

int main()
{
    int a[10][10], r, c, i, j;
    int top = 0, bottom, left = 0, right;

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter matrix elements:\n");
    for(i = 0; i < r; i++)
        for(j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    bottom = r - 1;
    right = c - 1;

    printf("Spiral order: ");

    while(top <= bottom && left <= right)
    {
        for(j = left; j <= right; j++)
            printf("%d ", a[top][j]);
        top++;

        for(i = top; i <= bottom; i++)
            printf("%d ", a[i][right]);
        right--;

        if(top <= bottom)
        {
            for(j = right; j >= left; j--)
                printf("%d ", a[bottom][j]);
            bottom--;
        }

        if(left <= right)
        {
            for(i = bottom; i >= top; i--)
                printf("%d ", a[i][left]);
            left++;
        }
    }

    return 0;
}
