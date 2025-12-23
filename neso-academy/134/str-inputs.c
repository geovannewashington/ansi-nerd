// Neso Academy - Class n. 134: 
// Reading Strings using scanf and gets Functions  

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// We can read strings using scanf but it have a bunch of problems
// when using the %s format specifier, scanf reads characters until it encounters a whitespace character 
// (space, tab, newline). The whitespace itself is left in the input buffer

// What is a buffer?
// A buffer is a region in memory (used a character array) used to temporarily store data while it is 
// being moved from on location to another 

// What is the difference between gets and fgets?
// gets reads from stdin only, it cannot read from a file stream.
// gets does NOT perform any bounds checking on the destination buffer (Buffer Overflow Risk).
// fgets is Saffer, recommended for modern C 

void clear_stdin(void)
{
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int main(void) 
{
    // 1. Using fgets to get a string from the user (stdin)
    
    // char buffer[100]; // buffer to store the input

    // printf("Enter a string: ");
    // if (fgets(buffer, sizeof(buffer), stdin) != NULL) {
    //     printf("You entered: %s!", buffer);
    //     // Outputs: You entered: <whatever>
    //     // ! 
    // } else {
    //     puts("Error reading input.");
    // }
    
    // We use sizeof(buffer) to ensure fgets know the maximum characters to read (including the null terminator)
    // Note that fgets returns NULL if an error occurs or EOF is reached.
    // Otherwise it returns a pointer to the same character array (char *s) that was passed as an 
    // argument to the function.
    
    // 2. Handling the newline character
    // When the user presses Enter, fgets stores the newline \n in the buffer. Usually, we want to remove it:

    // char buffer[100]; 
    //
    // printf("Enter a string: ");
    // if (fgets(buffer, sizeof(buffer), stdin) != NULL) {
    //     // Remove trailing newline if present
    //     size_t len = strlen(buffer);
    //     if (len > 0 && buffer[len - 1] == '\n') // If there is a line and the last element is the newline 
    //         buffer[len - 1] = '\0';
    //     
    //     printf("You entered: %s!\n", buffer);
    // } else {
    //     puts("Error reading input.");
    // }
    
    // 3. Clearing the input buffer (if user types too much)
    // If the user types more characters than the buffer can hold, the remaining input stays in 
    // stdin. We can discard it:

    char buffer[100]; 

    printf("Enter a string: ");
    if (fgets(buffer, sizeof(buffer), stdin) != NULL) {
        // Remove trailing newline if present
        size_t len = strlen(buffer);
        if (len > 0 && buffer[len - 1] == '\n') { // If there is a line and the last element is the newline  
            buffer[len - 1] = '\0';
        } else  {
            clear_stdin(); // clear remaining characters
        }
       
        printf("You entered: %s!\n", buffer);
    } else {
        puts("Error reading input.");
    }
    return EXIT_SUCCESS;
}
