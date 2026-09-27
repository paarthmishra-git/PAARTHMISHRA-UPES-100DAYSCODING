//Frequency of Each Element
#include <stdio.h>

// Uses a visited array to avoid counting the same element's frequency twice
int main() {
    int arr[] = {1, 2, 2, 3, 3, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int visited[100] = {0};

    for (int i = 0; i < n; i++) {
        if (visited[i] == 1)
            continue;

        int count = 1;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                visited[j] = 1;
                count++;
            }
        }
        printf("%d occurs %d time(s)\n", arr[i], count);
    }
    return 0;
}
