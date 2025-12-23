# Understanding the Dangling Pointers

Definition:
A dangling pointer is a pointer that points to a memory location that has been deallocated or freed
or that is no longer valid.

Example:

```c
#include <stdlib.h>

int main() {
    int *ptr = (int *)malloc(sizeof(int));
    *ptr = 10;
    free(ptr); // ptr now points to deallocated memory - it's dangling
    // Attempting to dereference ptr here would lead to undefined behavior
    return 0;
}
```

The above example would probably result in a segmentation fault, which is when we try to read or write
to invalid memory location.

## Variables Going Out of Scope

Avoid return pointers from a local function.

```c
#include <stdio.h>

int *createDanglingPointer()
{
    int x = 5; // Local variable
    return &x; // Returning the address of a local variable
}

int main()
{
    int *danglingPtr = createDanglingPointer(); // danglingPtr now points to invalid memory
    // Attempting to dereference danglingPtr here would lead to undefined behavior
    printf("%d\n", *danglingPtr); // Likely prints garbage or causes a crash
    return 0;
}
```
