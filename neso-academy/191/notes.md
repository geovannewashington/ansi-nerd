# Dynamic Memory Allocation using calloc()

`calloc` stands for clear allocation.

it's used to dynamically allocate multiple blocks of memory.

it is different from malloc in two main ways:

1. calloc() needs two arguments instead of just one

calloc function signature:

`void *calloc(size_t n, size_t size)`

where `n` is the number of blocks and `size` is the size of each block.

e.g.:

These two are equivalent:

`int *ptr = (int *)calloc(10, sizeof(int));`
`int *ptr = (int *)malloc(10 * sizeof(int));`

2. Memory allocated by `calloc` is initialized to zero.
   while with `malloc` it is initialized with gargabe values.
