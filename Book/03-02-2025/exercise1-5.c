#include <stdio.h>

void table_header()
{
        puts("fahrenheit celsius");
        puts("------------------");

}

int main(void)
{
        const int start_temp = 300;
        const int step = 20; 
        int fahr;

        table_header();
        for (fahr = start_temp; fahr >= 0; fahr -= step) {
                printf("%3d %6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));
        }

        return 0;
}