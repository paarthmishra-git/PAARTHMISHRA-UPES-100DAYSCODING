//Question: Find the smallest missing element in a sorted array.


#include <stdio.h>

int missing(int a[], int l, int h)
{
    if (l > h)
        return l;

    int m = (l + h) / 2;

    if (a[m] == m)
        return missing(a, m + 1, h);
    else
        return missing(a, l, m - 1);
}

int main()
{
    int a[100], n, i;

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter sorted elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Smallest missing element = %d", missing(a, 0, n - 1));

    return 0;
}
