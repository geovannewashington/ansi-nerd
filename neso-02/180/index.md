# Some guidelines:

## About nested loops:

```c
for (i = 1; i <= n; i++) {
    for (j = 1; i <= n; i++) {
        // statement
    }
}
```

The total time of nested loops in n . n = O(n^2), a quadratic growth rate.

## About consecutive statements

```c
// total time = 3 units
int x = 2;
int i;
x = x + 1;

// total time = n units
for (int = 1; i <= n; i++) {
    // statement
}

// total time = n^2 units
for (i = 1; i <= n; i++) {
    for (j = 1; i <= n; i++) {
        // statement
    }
}
```

So the total running time of this program would be the sum of the runnnig time of each statement.
Total time: `n^2 + n + 3` = O(n^2), why is it n^2? because that's the dominant term that actually
matters as the input size grows.

To continue:

- Study: logarithm in order to calculate the total amount of iterations a loop will have in programming
- See 'Watch Later' youtube playlist
- How modulo is used in rotation computer science problems and why
- Then rewatch lecture n. 181
