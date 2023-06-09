#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int length;
    char *str;
    
    printf("Enter the length of the string: ");
    scanf("%d", &length);
    
    str = (char*)malloc((length + 1) * sizeof(char));  // Allocate memory for the string
    
    if (str == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }
    
    printf("Enter a string of length %d: ", length);
    scanf(" %s", str);  // Read the string into the dynamically allocated memory
    
    printf("The string you entered is: %s\n", str);
    
    free(str);  // Free the dynamically allocated memory
    
    return 0;
}
