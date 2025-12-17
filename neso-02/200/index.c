#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
 
typedef uint8_t BYTE;

struct code {
    int a;
    char b;
    struct code* ptr;
};

int main()
{
    struct code node  = {65, 'A', NULL};
    struct code node2 = {66, 'B', NULL};

    node.ptr = &node2;

    // this way we can access node2 members using node.
    printf("%d %c\n", node.ptr->a, node.ptr->b);
    return EXIT_SUCCESS;
}
