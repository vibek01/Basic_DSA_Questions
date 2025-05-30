#include <stdio.h>
#include <stdlib.h>
int main() {
    // Define a jagged array
    int* jagged_array[] = {
        (int[]){1, 2, 3},
        (int[]){4, 5},
        (int[]){6, 7, 8, 9},
        (int[]){10}
    };
    // Accessing elements in a jagged array
    printf("Elements of the jagged array:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < sizeof(jagged_array[i])/sizeof(int); j++) {
            printf("%d ", jagged_array[i][j]);
        }
        printf("\n");
    }
    // Adding a new row to the jagged array
    int new_row[] = {11, 12, 13};
    jagged_array[4] = new_row;
    // Accessing elements after adding a new row
    printf("\nElements of the jagged array after adding a new row:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < sizeof(jagged_array[i])/sizeof(int); j++) {
            printf("%d ", jagged_array[i][j]);
        }
        printf("\n");
    }
    return 0;
}
