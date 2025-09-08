// A deep dive into Pointers and Pointer Arithmetic 

// quick recap: variables are locations in the computer's memory which can be accessed by their identifier
// (their name)

// For a C program, the memory of a computer is like a sucession of memory cells, each one byte (8 bits) 
// in size and each with a unique address 

// Adress-of operator (ampersand &)
// foo = &myvar; -> foo would get the adress of myvar, with the adress-of operator (&), we are no 
// longer assigning the content of the variable itself to foo, but its address.

// The variable that stores the address of another variable (like foo) is what in C is called a pointer.

///////////////////////////////////////////////////////////////////////////////////////////////////
// Derefence Operator

// Pointers are said to 'point to' the variable whose address they store. 
// In our example: the pointer foo points to myvar

//An interesting property of pointers is that they can be used to access the variable they point 
//to directly. This is done by preceding the pointer name with the dereference operator (*). 
//The operator itself can be read as "value pointed to by".

// baz = *foo; // -> baz equal to value pointed to by foo 

///////////////////////////////////////////////////////////////////////////////////////////////////
// Declaring Pointers 

// Once a pointer is dereferenced, the type needs to be known. And for that, the declaration of a pointer 
// needs to include the data type the pointer is going to point to.

// int *number; 
// char *character;
// double *decimals;

// These types are not the type of the pointer itself, but the type of the data the pointer points to
// When you dereference a pointer in C, the compiler needs to answe two questions.

// 1. How many bytes should I read/write?
// 2. How do I interpret those bytes?  

// Let's see an example

#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int int_arr[3] = {10, 20, 30}; 
    
    void *i_ptr = NULL;   // void pointer: points to some memory, but type is unknown
    i_ptr = int_arr;      // points to the first element of int_arr
    
    // Since i_ptr is void, the compiler does not know:
    // 1. How many bytes to read when dereferencing
    // 2. How to interpret those bytes (int, char, float, etc.)
    printf("%d\n", *(int *)i_ptr); // cast to int* and then dereference -> prints 10
    
    return EXIT_SUCCESS;
}

// Note that the asterisk (*) used when declaring a pointer only means that it is a pointer.
// and should not be confused with the derefence operator.

















