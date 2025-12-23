# Dynamic Memory Allocation using realloc()

Function signature of `realloc`:

`void *realloc(void *ptr, size_t new_size)`

where ptr is a pointer to the previously allocated memory.
and new_size is the new size to allocate.

if new_size is greater than the old size, then realloc will automatically copy all the contents
of the original pointer into the newly created memory.
