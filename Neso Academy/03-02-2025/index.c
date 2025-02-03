#include <stdio.h>
#include <limits.h>

int main(void)
{       
        // -> general rule: sizeof(short int) <= sizeof(int) <= sizeof(long int)
        // -> on my machine, however: sizeof(short int) < sizeof(int) < sizeof(long int)

        printf("%zu bytes\n", sizeof(short int)); // -> 2 bytes
        printf("%zu bytes\n", sizeof(int));       // -> 4 bytes
        printf("%zu bytes\n", sizeof(long int));  // -> 8 bytes

        // by default -> int random_var is already SIGNED int (which means it can take negativa values)
        // unsigned int random_var on the other hand, allows only positive values (> 0)

        unsigned random_number = -5;
        // printf("%u\n", random_number); //integer underflow

        int int_min = INT_MIN;
        int int_max = INT_MAX;
        printf("range of signed integer is from: %d to %d\n", int_min, int_max);
        
        unsigned int uint_min = 0;
        unsigned int uint_max = UINT_MAX; 
        printf("range of unsigned integer is from: %u to %u\n", uint_min, uint_max);
        //note integers using the 'unsigned' modifier needs the %u format specifier
        
        short int shrt_int_min = SHRT_MIN;
        short int shrt_int_max = SHRT_MAX;
        printf("range of short integer is from: %d to %d\n", shrt_int_min, shrt_int_max);
        //Expected Output: range of short integer is from: -32767 to 32767

        //we can also combine multiples modifiers (the order is irrelevent)
        short unsigned int var1 = 0;
        short unsigned int var2 = USHRT_MAX; // -> 65535
        printf("range of short unsigned integer is from: %u to %u\n", var1, var2);
        // Expected Output: range of short unsigned integer is from: 0 to 65535
        
        printf("On my machine long long int has %zu bytes", sizeof(long long int)); // -> expected output: 8
        return 0;
}