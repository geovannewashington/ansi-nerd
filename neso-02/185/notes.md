# Understanding Void Pointers

`Void Pointer` is a pointer that has no asssociated data type with it.

Void pointers can point to any data type and can be typesasted to any type.
This is specially useful in functions like `malloc` and `calloc` so they create memory for any type.

When we typecast a void pointer to another type of pointer we are effectivelly changing the way
the bits are interpreted.
