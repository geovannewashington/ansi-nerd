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
// When you dereference a pointer in C, the compiler needs to answer two questions.

// 1. How many bytes should I read/write?
// 2. How do I interpret those bytes?  

// Let's see an example
/*
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
*/
// Note that the asterisk (*) used when declaring a pointer only means that it is a pointer.
// and should not be confused with the derefence operator.

///////////////////////////////////////////////////////////////////////////////////////////////////
// Pointers and arrays  

// When using square brackets notation in arrays e.g.: (arr[2]), these brackets are, in fact, a dereference
// operator known as offset operator. They dereference the variable they follow just as * does.
// but they also add the number between brakets to the address being dereferenced
// For instance: 
// a[5] = 0 is equivalent to *(a + 5) -> same value

///////////////////////////////////////////////////////////////////////////////////////////////////
// Pointer arithmetics

// To begin with, only addition and subtraction operations are allowed; the others make no sense 
// in the world of pointers. But both addition and subtraction have a slightly different behavior 
// with pointers, according to the size of the data type to which they point.

// int *i_ptr; // assume sizeof(int) == 4 bytes
// i_ptr + n -> would actually be: i_ptr + n * sizeof(int) 
// i_ptr + 2 -> i_ptr + 2 * sizeof(int) -> i_ptr + 8 bytes, 2 integers forwards

// The reason is that, when adding one to a pointer, the pointer is made to point to the following 
// element of the same type, and, therefore, the size in bytes of the type it points to is added to the pointer.

/*
#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int int_arr[3] = {10, 20, 30}; 

    printf("%d\n", &int_arr[2]);
    printf("%d\n", int_arr + 2);
    // Both should point to the same address

    printf("%d\n", int_arr[2]); 
    printf("%d\n", *(int_arr + 2));
    // Both should print 30
    return EXIT_SUCCESS;
}
*/

///////////////////////////////////////////////////////////////////////////////////////////////////
// Pointers and const 

/*
int x; 
int y = 10;
const int *ptr = &y; // Here the point itself is NOT constant, we can modifiy it (tell it to point to another location)
x = *ptr; // ok: reading ptr
*ptr = x; // error: modifying ptr 
*/
/*
#include <stdio.h>
#include <stdlib.h>

void increment_all(int *start, int *stop) 
{
    int *current = start;

    while (current != stop) {
        ++(*current); // increment value pointed
        ++(current);  // increment pointer
    }
}

void print_all(const int *start, const int *stop) 
{
    const int *current = start;

    while (current != stop) {
        printf("%d\n", *current);
        ++(current);  // increment pointer
    }
}

int main() 
{
    int numbers[] = {10, 20, 30};
    increment_all(numbers, numbers + 3); 
    print_all(numbers, numbers + 3);  
    return EXIT_SUCCESS;
}
*/
/*
int x;
int *p1 = &x;             // non-const pointer to non-const int
const int *p2 = &x;       // non-const pointer to const int
int *const p3 = &x;       // const pointer to non-const int
const int *const p4 = &x; // const pointer to const int
*/

///////////////////////////////////////////////////////////////////////////////////////////////////
// Pointers and string literals 

// This declares an array with the literal representation for "hello", and then a pointer to its 
// first element is assigned to foo.
// const char *foo = "hello";

// If we imagine that "hello" is stored at the memory location that start at the address 1702:
// const char *foo = "hello";

// char str[] = "hello"; // -> char str[] = {'h', 'e', 'l', 'l', 'o', '\0'};
// foo = str; // -> foo = &str[0] 

// Note that foo is a pointer and contains the vluae 1702, and not 'h', nor 'hello', although 1702 
// indeed is the addres of both of these.

/* And because pointers and arrays behave essentially in the same way in expressions, foo can be used 
to access the characters in the same way arrays of null-terminated character sequences are. For example: */

// *(foo + 4);
// foo[4];

/* #include <stdio.h>
#include <stdlib.h>

int main(void) 
{
    int factor = 2;
    int arr[] = {10, 20, 30};     
    
    int *i_ptr = arr;
    
    // Both print the same value 
    // Indeed array square bracket notation is just syntatic sugar for pointer arithmetic
    // arr[x] is equivalent to *(arr_ptr + x) which is *(arr_ptr + x * sizeof(data_type)) 
    printf("%d\n", arr[factor]);       // 30
    printf("%d\n", *(i_ptr + factor)); // 30
    return EXIT_SUCCESS;
} */












