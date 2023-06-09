#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;  // Declare a pointer to hold the memory address
    
    ptr = (int*)malloc(sizeof(int));  // Allocate memory for one integer
    
    if (ptr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }
    
    *ptr = 42;  // Store a value in the dynamically allocated memory
    
    printf("The value stored in the dynamically allocated memory is: %d\n", *ptr);
    
    free(ptr);  // Free the dynamically allocated memory
    
    return 0;
}

