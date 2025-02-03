#include <stdio.h>

void table_header()
{
        puts("fahrenheit celsius");
        puts("------------------");

}

int main(void)
{
        int fahr;

        table_header();
        for (fahr = 300; fahr >= 0; fahr -= 20) {
                printf("%3d %6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));
        }

        return 0;
}