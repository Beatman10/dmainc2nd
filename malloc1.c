#include <stdio.h>
#include <stdlib.h>

int main() {
    int size;
    float *numbers;
    
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    
    numbers = (float*)malloc(size * sizeof(float));  // Allocate memory for the array
    
    if (numbers == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }
    
    printf("Enter %d floating-point numbers:\n", size);
    
    for (int i = 0; i < size; i++) {
        scanf("%f", &numbers[i]);  // Read values into the dynamically allocated array
    }
    
    printf("The numbers you entered are:\n");
    
    for (int i = 0; i < size; i++) {
        printf("%.2f \n ", numbers[i]);  // Print the values stored in the dynamically allocated array
    }
    
    free(numbers);  // Free the dynamically allocated memory
    
    return 0;
}
