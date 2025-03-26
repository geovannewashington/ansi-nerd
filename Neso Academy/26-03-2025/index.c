#include <stdio.h>

/* Aula n.34 - Precedence and Associativity of Operators*/

int main(void)
{
    int a = 10, b = 20, c = 30, d =  40;
    
    if (a <= b == d > c)
        puts("TRUE");
    else 
        puts("FALSE");
    return 0;
}
