#include <stdio.h>

/* Aula n. 33 - Comma operator in C */
// nice little exercise
int main(void)
{   
    int var, num;
    num = (var = 15, var + 35);

    printf("%d\n", num); 
    return 0;
}
