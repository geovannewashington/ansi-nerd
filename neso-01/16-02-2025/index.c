#include <stdio.h>

int main(void)
{       
        int value;

        value = increment();
        value = increment();
        value = increment();
        value = increment();
        value = increment();

        
        printf("%d\n", value); // -> 5 
        return 0;
}