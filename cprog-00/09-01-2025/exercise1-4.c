#include <stdio.h>

/* Celcius to Farenheit Table */

void heading()
{
        printf("Celcius Fahrenheit\n");
        printf("------------------\n");
}

int main()
{
        float lower = 0;
        float upper = 100;

        float fahr;
        float celcius = lower;
        
        int step = 10;

        heading();

        while (celcius <= upper) {
                fahr = (celcius * 9.0/5.0) + 32;
                printf("%6.2f %7.2f\n", celcius, fahr);
                celcius += step;
        }
        return 0;      
}