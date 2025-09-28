// example-2.c -> Array of Function Pointers
// This is a classic way to mimic <function dispatch tables> 

// What is a function dispatch table?
// A function dispatch table is a data structure that holds pointers to functions or methods, allowing 
// programs to select and execute a specific function at runtime based on a key or index, rather 
// than using lengthy if-elif or switch statements.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Functions with the same signature
void say_hello()
{
    puts("Hello!");
}

void say_goodbye()
{
    puts("Goodbye!");
}

void say_howdy()
{
    puts("Howdy!");
}

int main()
{
    char buff[1024];
    int choice;

    // Array of function pointers
    void (*funcs[])() = {say_hello, say_goodbye, say_howdy};
    int num_funcs = sizeof(funcs) / sizeof(funcs[0]);
    
    // Simulate dynamic calls based on user input
    printf("Enter 0 for Hello, 1 for Goodbye, 2 for Howdy: ");
    if (fgets(buff, sizeof(buff), stdin) == NULL) {
        fprintf(stderr, "Error reading input");
        return EXIT_FAILURE;
    }
    
    size_t len = strlen(buff);
    if (len && buff[len - 1] == '\n') {
        buff[len - 1] = '\0';
    } else {
        int c;
        while ((c = getchar()) != '\n' && c != EOF); // Clear remaining input
    }
    char *endptr;
    choice = strtol(buff, &endptr, 10);
    if (*endptr != '\0') {
        fprintf(stderr, "Invalid number.\n");
        return EXIT_FAILURE;
    }

    if (choice < 0 || choice >= num_funcs) {
        fprintf(stderr, "Invalid choice.\n");
        return EXIT_FAILURE;
    }
    
    funcs[choice](); // Call the function dynamically
    return EXIT_SUCCESS;
}
