#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int size;

    printf("Enter the size of the string you want to store: ");
    scanf("%d", &size);

    // Allocate memory for the string (including space for null terminator)
    char* str = (char*)malloc((size + 1) * sizeof(char));

    if (str == NULL) {
        printf("Memory allocation failed. Exiting...\n");
        return 1;
    }

    printf("Enter a string of maximum %d characters: ", size);
    scanf("%s", str);

    // Print the string
    printf("The string you entered is: %s\n", str);

    // Free the allocated memory
    free(str);

    return 0;
}

