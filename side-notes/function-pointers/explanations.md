Let's say we have a super simple function...

```c
int add(int a, int b)
{
    return a + b;
}
```

A pointer to a function has a type that matches the function’s signature.

```c
int (*f_ptr)(int, int);
```

Assign a function to the pointer

```c
f_ptr = add; // We don't need to use the address of operator (&add) becuase the name of the
             // function already 'decays' to a pointer to itself with the correct type int (*)(int, int).
```

We can now call the function via the pointer:

```c
int result = f_ptr(2, 3); // Same as calling add(2, 3);
printf("%d\n", result);   // 5
```

Why the parentheses?

`int *f_ptr(int, int)`

Note that this is wrong because f_ptr is a function that returns int\*. Its not a pointer to a function.
So to declare a function pointer you need the parentheses

An example using typedef

```c
typedef int (*binary_op)(int, int);

binary_op op = add;
printf("%d\n", op(5, 7)); // 12
```
