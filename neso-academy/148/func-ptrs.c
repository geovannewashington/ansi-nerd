// Neso Academy - Class n. 148: 
// Function Pointers in C 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 1. Function Pointers
// Like normal pointers but with the capability of pointing to a function.
// They allow us to refer to functions and call them dinamically.
// Functions are a set of instructions and just like normal variables its instructions are stored 
// somewhere in memory. 

// When the name of a function is used, it 'decays' or is implicity converted to a pointer to that function.

// 2. How to declare a pointe to an array?
// int *ptr[10]; -> This is wrong... 
// Why? because of the precedence of the operators  
// Precedence of [] is higher than *
// So in this case we have an unidimensional array called 'ptr' where each of the 10 elements
// is a pointer to an integer...

// 3. What's the solution?
// int (*ptr)[10]; 
// Here ptr is pointing to an array that consists of 10 integers...
// So I guess we can say that the type of this pointer is int (*)[10];

// 4. How to declare a pointer to a function?
// Declaration, generic way:
// A function pointer declaration resembles a function prototype, but with an asterisk and 
// parentheses around the pointer variable name.
// return_type (*pointer_name)(parameter_type1, parameter_type2, ...);

// 5. Assignment
// You can assign the address of a function to a function pointer. The function's signature 
// (return type and parameters) must match the function pointer's declaration.

// 6. Calling a function through a pointer
// Method 1: Dereferencing the pointer
// int result = (*math_op)(10, 5);

// Method 2: Using pointer the pointer directly (C automatically dereferences)
// int result = math_op(10, 5);

// 7. Applications
// Function pointers are used in various scenarios:

// Callback functions: Passing a function pointer to another function, allowing the latter to "call back" 
// a specific function provided by the caller. Examples include qsort and event handling.

// Implementing polymorphism (without C++ objects): Creating arrays of function pointers to call 
// different functions based on an index or condition.

// Dynamic function calls: Choosing which function to execute at runtime.

// Creating jump tables: Efficiently dispatching to different functions based on an input value.

int add(int a, int b)
{
    return a + b;
}

int main()
{
    // Declaration of a pointer to a function.
    int (*math_op)(int, int) = NULL;
    math_op = add;

    // int result = (*math_op)(10, 5); // 15
    int result = math_op(10, 5); // 15
    printf("%d\n", result);
    return EXIT_SUCCESS;
}
