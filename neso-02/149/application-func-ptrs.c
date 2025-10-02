// Neso Academy - Class n. 149: 
// Application of Function Pointers in C 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define opt 4

float sum(float a, float b) { return a + b; };
float sub(float a, float b) { return a - b; };
float mult(float a, float b) { return a * b; };
float divi(float a, float b) { return a / b; };

typedef float (*math_op[])(float, float);

void prompt_operation(int *user_choice)
{
    puts("------------------");
    puts("Enter your choice:");
    printf("0 - sum\n1 - subtraction\n2 - multiplication\n3 - division\n");
    puts("------------------");
    scanf("%d", user_choice);

}

void prompt_operands(float *a, float *b)
{
    puts("------------------");
    puts("Enter two numbers (without spaces)");
    puts("------------------");
    scanf("%f %f", a, b);
}

int main(int argc, char *argv[])
{
    int user_choice, choice_is_valid = 0; 
    float a, b, result;
    const int options[opt] = { 0, 1, 2, 3 };
    math_op funcs = { sum, sub, mult, divi };
    
    if (argc == 2) {
        user_choice = *argv[1] - '0';
    } else {
        prompt_operation(&user_choice);
    }
    
    for (int i = 0; i < opt; i++) {
        if (options[i] == user_choice) {
            choice_is_valid = 1; // true
        }
    }

    if (!choice_is_valid) {
        fprintf(stderr, "Invalid choice, finishing program...\n");
        return EXIT_FAILURE;
    } 
    
    prompt_operands(&a, &b);

    result = funcs[user_choice](a, b);
     
    if (fmod(result, 1.0) != 0.0) {
        // floating-point number
        printf("%f\n", funcs[user_choice](a, b));
    } else { // integer
        printf("%d\n", (int)funcs[user_choice](a, b));
    }

    return EXIT_SUCCESS;
}
