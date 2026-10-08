//Write a C program to merge two sorted arrays into one sorted array. Take the elements of both arrays from the user using scanf().


#include <stdio.h>

void merge(int big[], int small[], int n, int m)
{
    int i = n - 1;
    int j = m - 1;
    int k = n + m - 1;

    while (i >= 0 && j >= 0)
    {
        if (big[i] > small[j])
        {
            big[k] = big[i];
            i--;
        }
        else
        {
            big[k] = small[j];
            j--;
        }

        k--;
    }

    while (j >= 0)
    {
        big[k] = small[j];
        j--;
        k--;
    }
}

int main()
{
    int big[100], small[100];
    int n, m, i;

    printf("Enter size of large array: ");
    scanf("%d", &n);

    printf("Enter elements of large array in sorted order:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &big[i]);
    }

    printf("Enter size of small array: ");
    scanf("%d", &m);

    printf("Enter elements of small array in sorted order:\n");
    for (i = 0; i < m; i++)
    {
        scanf("%d", &small[i]);
    }

    merge(big, small, n, m);

    printf("Merged Array: ");
    for (i = 0; i < n + m; i++)
    {
        printf("%d ", big[i]);
    }

    return 0;
}
