#include <stdio.h>

#define PI 3.1415

float process_pi(int factor)
{
        return PI * factor;
}

int main(void)
{
        printf("PI doubled: %.4f\n", process_pi(2));        
        
        // the followig printf statement will probably give an error
        printf("PI doubled: %.4f\n", process_pi(2)); 
        return 0;
}