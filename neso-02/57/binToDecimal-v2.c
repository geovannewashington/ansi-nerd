#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

// Neso Academy class n. 57 - Binary to Decimal Conversion
// Second Version.

// We need to multiply each digit by 2 to the power of it's position 
// Example: int bin_num = 1001; // 4 bits                            
// decimal_number == 1 * 2^3 + ... + 1 * 2^0 = 9                     
// Extra challenge: number must be trully a number.

int int_to_decimal(char bin_num[]) 
{
    int num_size = strlen(bin_num) - 1; // -> 4 in this case.
    int res = 0;

    for (int i = 0, size = strlen(bin_num); i < size; i++) {
        // When you shift 1 left by n bits, you get 2 to the power of n.
        res += (bin_num[i] - '0') * 1 << num_size; 
        num_size--;
    }
    return res;
}

int main(int argc, char *argv[])
{
    char bin_num[] = "10110"; // should be 22 in decimal.
    int decimal_number = int_to_decimal(bin_num); 

    printf("Decimal: %d\n", decimal_number);
    exit(EXIT_SUCCESS);
}
