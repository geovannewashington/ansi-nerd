#include <stdio.h>

/* Aula n. 36 - Operators in C (Problem Solved 2) */
int main(int argc, char *argv[])
{
    int a = 1;
    int b = 1;
    int c = ++a || b++;
    int d = b-- && --a;

    printf("%d %d %d %d", d, c, b, a);
    return 0;
}
