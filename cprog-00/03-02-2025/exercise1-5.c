#include <stdio.h>

/* Prints Fahrenheit-Celcius Table */

#define LOWER 0    // lower limit of table
#define UPPER 300  // upper limit 
#define STEP 20    // step size

void table_header()
{
        puts("fahrenheit celsius");
        puts("------------------");

}

int main(void)
{
        int fahr;

        table_header();
        for (fahr = UPPER; fahr >= LOWER; fahr -= STEP) {
                printf("%3d %6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));
        }

        return 0;
}