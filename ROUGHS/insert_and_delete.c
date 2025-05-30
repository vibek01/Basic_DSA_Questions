#include <stdio.h>

int main() {
    // Create an array of size 5
    int array[5];

    // Insert numbers into the array
    printf("Insert numbers into the array:\n");
    for (int i = 0; i < 5; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    // Display the original array
    printf("\nOriginal Array: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    // Delete two numbers from the array (e.g., deleting the first two elements)
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 4; j++) {
            array[j] = array[j + 1];
        }
    }

    // Display the array after deletion
    printf("\nArray after deleting two numbers: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", array[i]);
    }
    printf("\n\n");

    return 0;
}