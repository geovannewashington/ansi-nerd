#include <stdio.h>

extern int external_var; // -> this variable is declared here but not defined here
int a = 10;

int global_int; // -> global variables are, by deafult, initalized with zero;

int main(void)
{
        extern int a; // -> the variable is not defined here, it will first look outside it's scope
        // -> and if not found outside it's scope, it will look for the definition in other files
        // -> however, if link finds multiple definitions will thrown an error
                      
        printf("%d\n", a); 
        auto int my_int;        // -> this is the same as int my_int;
        printf("%d\n", my_int); // -> will print some gargabe value (random value)

        printf("%d\n", global_int); // -> 0

        printf("%d\n", external_var); // -> 25
        return 0;
}