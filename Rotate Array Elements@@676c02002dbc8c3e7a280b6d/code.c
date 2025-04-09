#include <stdio.h>

// Function to rotate the array to the right by d positions
void rotateArray(int arr[], int n, int d) {
    // To handle if d > n (as rotating n times would return the array to the original state)
    d = d % n;

    // Create a temporary array to store the rotated elements
    int temp[d];

    // Store the first d elements in the temporary array
    for (int i = 0; i < d; i++) {
        temp[i] = arr[i];
    }

    // Shift the remaining elements to the right
    for (int i = d; i < n; i++) {
        arr[i - d] = arr[i];
    }

    // Copy the elements from the temporary array to the original array
    for (int i = 0; i < d; i++) {
        arr[n - d + i] = temp[i];
    }
}

// Function to print the array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {5, 1, 2, 3, 4, 5, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int d = 2; // Number of positions to rotate

    printf("Original array: ");
    printArray(arr, n);

    rotateArray(arr, n, d);

    printf("Array after rotation by %d positions: ", d);
    printArray(arr, n);

    return 0;
}
