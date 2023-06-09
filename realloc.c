#include <stdio.h>
#include <stdlib.h>

int main() {
    int size;
    int *numbers;
    
    printf("Enter the initial size of the array: ");
    scanf("%d", &size);
    
    numbers = (int*)malloc(size * sizeof(int));  // Allocate memory for the initial array
    
    if (numbers == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }
    
    printf("Enter %d integers:\n", size);
    
    for (int i = 0; i < size; i++) {
        scanf("%d", &numbers[i]);  // Read values into the dynamically allocated array
    }
    
    printf("The numbers you entered are:\n");
    
    for (int i = 0; i < size; i++) {
        printf("%d ", numbers[i]);  // Print the values stored in the dynamically allocated array
    }
    
    int newSize;
    
    printf("\nEnter the new size of the array: ");
    scanf("%d", &newSize);
    
    numbers = (int*)realloc(numbers, newSize * sizeof(int));  // Reallocate memory for the array
    
    if (numbers == NULL) {
        printf("Memory reallocation failed.\n");
        return 1;
    }
    
    printf("Enter %d more integers:\n", newSize - size);
    
    for (int i = size; i < newSize; i++) {
        scanf("%d", &numbers[i]);  // Read additional values into the dynamically reallocated array
    }
    
    printf("The updated numbers in the array are:\n");
    
    for (int i = 0; i < newSize; i++) {
        printf("%d ", numbers[i]);  // Print the updated values stored in the dynamically reallocated array
    }
    
    free(numbers);  // Free the dynamically allocated memory
    
    return 0;
}
