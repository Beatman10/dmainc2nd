#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;

    printf("Enter the number of integers you want to store: ");
    scanf("%d", &n);

    // Dynamically allocate memory for an array of integers
    int* numbers = (int*)malloc(n * sizeof(int));

    if (numbers == NULL) {
        printf("Memory allocation failed. Exiting...\n");
        return 1;
    }

    // Read integers from the user
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }

    // Display the integers
    printf("The integers you entered are:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    // Free the allocated memory
    free(numbers);

    return 0;
}

