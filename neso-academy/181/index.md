# Guidelines for Asymptotic Analysis (Part 2)

```c
scanf("%d", &n);

if (n == 0) {
    // task (assuming this task takes a liner time)
} else {
    for (i = 1; i <= n; i++) // -> n times O(n)
        // task (assuming this task takes a liner time)
}
```

The best case scenario for this code snippet, in terms of time complexity is O(n), linear...
why?
`n == 0` takes constant time... 1 unit
`// task` also takes constant time... 1 unit
so that would be 2, which is O(1)

The worst case scenario for this code snippet is `O(n)`
that's when the code takes the else route
why?
`n == 0` takes constant time again... so 1 unit
`the for loop takes n times`, so n units...
The total time complexity would be 1 + n, which is `O(n)`

note that this is the case only when the step grows by one, `i++`

## Logarithmic Complexity

Logarithmic complexity happens when the step of a loop get's multiplied or cutted for example.

To remember:
log2(8) = 3,
let log2(y) = x; this is the same as writing down: 2^x = y

```c
for (i = 1; i <= n)
{
    // statement
    i = i * 2; // notice how the step in getting doubled instead of incremented by just one
}
```

For the first iterations we have:
i = 1 = 2^0
i = 2 = 2^1
i = 4 = 2^2
.
.
.
For the K-th iteration we have:
i = n = 2^k-1

n = 2^(k - 1), where n is the iterator value and k the number of the iteration

## example:

```c
for (i = 1; i <= 32)
{
    printf("hello, world\n");
    i = i*2;
}
```

Based on this, if we get asked the question: how many times does printf prints on the screen.
We can evaluate that.

Which in this case will be 6 times...

Another example:

```c
for (i = n; i >= 1)
{
    // statement
    i = i/2;
}
```
