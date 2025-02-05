#include <stdio.h>
#include <limits.h>


int main(void)
{
        unsigned int num1 = UINT_MAX;
        long int num2 = 4294967296;

        // printf("%ld", num2);

        //when we try to exceede the maximum range of an unsigned int by one the value is: 
        printf("%lu", num2 % num1);
        //Expected Output is: 0        
        return 0;
}