#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Neso Academy class n. 57 - Binary to Decimal Conversion

// We need to multiply each digit by 2 to the power of it's position 
// Example: int bin_num = 1001; // 4 bits                            
// decimal_number == 1 * 2^3 + ... + 1 * 2^0 = 9                     
// Extra challenge: number must be trully a number.

int main(int argc, char *argv[])
{
    int bin_num = 10110; // should be 22 in decimal.
    int num_size = 0, decimal_number = 0;
    
    while (bin_num != 0) {
        int last_digit = bin_num % 10;
        decimal_number += last_digit * pow(2, num_size); 
        bin_num /= 10; // 1011 and so on...
        num_size++;
    }

    printf("Decimal: %d\n", decimal_number);
    exit(EXIT_SUCCESS);
}
