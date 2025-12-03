# Dynamic Memory Allocation using malloc()

## What is Malloc

malloc is built-in function declared in the header file: stdlib

malloc is the short name for `memory allocation` and used to dynamically allocated a single large
block of contiguous memory according to the size specified:

## The malloc looks like this:

`void *malloc(size_t size)`

size_t is defined in `stdlib` and is a macro to an unsigned integer, because sizes cannot be negative.

`malloc` simply allocates a memory block on the heap according to the size specified and on
success it returns a pointer pointing to the first byte of the allocated memory else return NULL

## Why Void Pointer?

malloc doesn't have an idea of what is poiting to.

It's the programmer's job to typecast it to the right type so the program knows how to interpret those bytes.

`malloc` merely allocates memory requested by the user without knowing the type of data to be stored inside the memory.
Note that `malloc` asks the OS for this memory, and talking to the OS requres system calls.
