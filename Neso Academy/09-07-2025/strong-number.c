#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

// lecture n. 51 - Check if the number is strong number

// Definition of a strong number: 
// example: 145 = 1! + 4! + 5! = 1 + 24 + 120 = 145. So this guy '145' IS a strong number.

// In this program the user can pass the number in one of the two ways:
// 1. command-line argument argv[1]
// 2. directy.

void error_msg() {
    printf("Usage: ./strong-number <number> OR ./strong-number\n");
    puts("Too many arguments provided");
    exit(1); 
}

long long get_factorial(int n);
bool is_number_strong(char number[]);

int main(int argc, char *argv[]) 
{
    //  NOTE: case argc == 2, number is argv[1]
    char number[50];
    
    // [FLAG]: array is not populated by default;
    bool is_populated = false;
    
    if (argc > 2) 
        error_msg();

    // there was no cli arguments
    if (argc == 1) {
        puts("Insert a number: ");
        scanf("%s", number);
        is_populated = true;
    }
    
    // bool result = is_populated && is_number_strong(number) || is_number_strong(argv[1]);
    bool result;
    if (is_populated) {
        result = is_number_strong(number);
    } else {
        result = is_number_strong(argv[1]);
    }
    
    if (result)
        puts("Number is strong.");
    else 
        puts("Number is NOT strong.");
    return 0;
}

long long get_factorial(int n) 
{
    if (n <= 1) return 1;
    return n * get_factorial(n - 1);
}

// returns true if number is strong, otherwise returns false;
bool is_number_strong(char number[]) 
{
    long long new_num = 0;
    for (int i = 0, len = strlen(number); i < len; i++) {
        new_num += get_factorial(number[i] - '0');
    }
    int original_number = atoi(number);
    return original_number == new_num;
}
