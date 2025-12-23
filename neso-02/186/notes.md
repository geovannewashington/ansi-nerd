# Understanding the NULL pointers

## What is a NULL pointer?

A NULL pointer is a pointer that does not point to any memory location. It represents an invalid
memory location.

Internally it looks like this:

`#define NULL ((void *)0)`

## Use of NULL pointer

It is used to safely intialize a pointer when that pointer doesn't point to a valid memory address yet.
(good practice)

e.g.:

```C
int main()
{
    int *ptr = NULL;
    return 0;
}
```

Useful for handling errors when using std function like `malloc`, which returns a NULL pointer
if it was unable to successfully allocate memory.

```c
int main()
{
    int *ptr;
    ptr = (int *)malloc(2 * sizeof(int));
    if (ptr == NULL) {
        fprintf(stderr, "malloc: failed to allocate\n");
    }
    return 0;
}
```

Note: that in the context of an IF statement, NULL evaluates as false, so intead of doing `ptr == NULL`
we can also do: `!ptr`

## Facts about NULL pointer

The value of NULL is 0. We can either use NULL or 0 but this 0 is written in context of pointers and
is not equivalent to the integer zero.

Size of the NULL pointer depends upon the plataform and is similar to the size of normal pointers.
