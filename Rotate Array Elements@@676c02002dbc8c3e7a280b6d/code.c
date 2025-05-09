#include <stdio.h>

void rotateArray(int arr[], int n, int d) {
    d = d % n;

    int temp[d];

    for (int i = 0; i < d; i++) {
        temp[i] = arr[i];
    }

    for (int i = d; i < n; i++) {
        arr[i - d] = arr[i];
    }

    for (int i = 0; i < d; i++) {
        arr[n - d + i] = temp[i];
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {5, 1, 2, 3, 4, 5, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int d = 2; 

    printf("Original array: ");
    printArray(arr, n);

    rotateArray(arr, n, d);

    printf(" %d: ", d);
    printArray(arr, n);

    return 0;
}
