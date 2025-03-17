#include <stdio.h>

int main(void)
{
    int x = 5, y = 4;
    int a = 7, b = 3;

    int result = x & y;
    int second_res = a | b;
    
    /* bitwise not (~) operator */
    // note: ~ is a unary operator, which menas it only require one operand
    // essetially it simply invertes the bits, that is, zeros becomes ones and ones becomes zeros

    printf("%d\n", result);     // -> expected output: 4
    printf("%d\n", second_res); // -> expected output: 7
    printf("%d\n", ~x);         // -> expected output: 10, -6? 
    return 0;
}
