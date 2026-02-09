#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Enter N: ");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
        arr[i] = rand() % 1000 + 1;

    printf("Before sorting:\n");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    for (int i = 0; i < n-1; i++)
        for (int j = 0; j < n-i-1; j++)
            if (arr[j] > arr[j+1]) {
                int t = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = t;
            }

    printf("\nAfter sorting:\n");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
