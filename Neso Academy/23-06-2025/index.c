#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

#define MAX 1000

/* Neso Academy - aula n. 49 */ 
// Check if number is palindrome number.

void reserve_number(char number[], int user_num); 

int main(int argc, char *argv[])
{
    char char_nums[MAX];
    printf("%s\n", "Insert a number");
   
    char c; 
    for (int i = 0; (c = getchar()) != EOF; i++) {
        if (isdigit(c))
            char_nums[i] = c; 
        if (c == '\0') 
            char_nums[i] = c;
    }

    int number = atoi(char_nums);
    reserve_number(char_nums, number);
    return 0;
}

void reserve_number(char number[],int user_num)
{
    // true by default
    int is_palindrome = 1;
    char reversed[MAX];

    int i = 0;
    int j = strlen(number) - 1; 
    
    while (number[i] != '\0') {
        reversed[j] = number[i];
        i++;
        j--;
    }
    reversed[strlen(number) + 1] = '\0';

    for (int i = 0, len = strlen(number); i < len; i++) {
        if (!(number[i] == reversed[i])) {
            is_palindrome = 0;
            break;
        }
    }

    if (!is_palindrome) 
        puts("It's NOT a palindrome");
    else 
        puts("It's a palindrome");
}






