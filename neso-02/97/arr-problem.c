#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>
#include <ctype.h>

// Neso Academy - Class n. 97: 
// Multidimensional Arrays (Solved Problem) 

// Question: Write a program that reads a 5x5 array of integers and then prints the row sum and 
// he column sum.

/*
Example 
Enter row 1: 8 3 9 0 10
Enter row 2: 3 5 17 1 1  
Enter row 3: 2 8 6 23 1 
Enter row 4: 15 7 3 2 9
Enter row 5: 6 14 2 6 0 

Output:
Row total: 30 27 40 36 28
Column total: 34 37 32 21
*/

// #define MAX 1000

// returns length of input line
int my_getline(int current_line, int line[][5]); 

int main(int argc, char *argv[]) 
{
    //  TODO: validate if the number of inserted columns is exactly 5, otherwise we throw an error
    int arr[5][5] = {0}; // 5 by 5 multi-dimensional array with all elements initalized to 0.
    int len;

    // int line[5]; // can store up to 5 integers

    for (int i = 0; i < 5; i++) {
        printf("Enter row %i: ", i + 1);
        
        len = my_getline(i, arr);
        printf("\n"); 
        
        // there was no more input
        if (len == 0) {
            break;
        }

        /* for (int j = 0; j < 5; j++) {
            // take user input 
            while (my_getline(i, arr)) != 0) { // while there is a line
            }
        } */

    }
    return EXIT_SUCCESS;
}

// Note that current_line refers to the multi-dimensional array line
//  BUG:: on the second call, getchar doesn't seem to work. 
//  the for loop body is simply executed withot waiting for any input.
//  it seems like c is storing 10 (which is ascii decimal for '\n')

int my_getline(int current_line, int line[][5]) 
{
    int i; // length of string
    int c = 0; // stores a character

    // TODO: figure out a better way of doing this, and exactly why this happens
    int temp;
    if (current_line >= 1 ) {
        while ((temp = getchar()) != '\n' && c != EOF) { };
    }

    // if character is a number, store it in line[current_line][i]
    for (i = 0; i < 5 && (c = getchar()) != EOF && c != '\n'; i++) {
        // printf("entrei no for loop\n");
        if (isdigit(c)) {
            line[current_line][i] = c - '0';
        }
    }
    
    return i;
}

















