#include <stdio.h>
#include <stdlib.h>

int main() {
    int size;
    int *numbers;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    numbers = (int*)calloc(size, sizeof(int));  // Allocate and initialize memory for the array

    if (numbers == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter numbers in the array: \n");

    for (int i = 0; i < size; i++) {
        scanf("%d ", &numbers[i]);  // scan the values stored in the dynamically allocated and initialized array
    }

    printf("The numbers in the array are:\n");

    for (int i = 0; i < size; i++) {
        printf("%d ", numbers[i]);  // Print the values stored in the dynamically allocated and initialized array
    }

    free(numbers);  // Free the dynamically allocated memory

    return 0;
}

