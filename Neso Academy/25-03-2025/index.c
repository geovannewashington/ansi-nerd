#include <stdio.h>

/* Aula n. 32 - Conditional Operators in C */
// nice little exercise
int main(void)
{
    int var = 75;
    int var2 = 56;
    int num;

    num = sizeof(var) ? (var2 > 23 ? ((var == 75) ? 'A' : 0) : 0) : 0;
    printf("%d\n", num);
    return 0;
}
