// K&R book, exercise n. 1-19
// Write a function reverse(s) that reverses the character string s. Use it to write a program
// that reverses its input a line at a time.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

#define MAX 1000 // How long can line be

// initializes a menu
void init_menu();
// populates input array and returns its length.
int my_getline(char s[], int max);
// Reverses the input character string
void reverse(char s[], char reversed[]);

int main(int argc, char *argv[]) 
{
    char line[MAX];
    char reversed_line[MAX];
    int len; // stores the current line input length
    
    init_menu();

    // while there is a line, invert it and print it
    while ((len = my_getline(line, MAX)) > 0) {
        // We could reverse while printing one character at a time within the reverse function
        // but let's use a more modular approach to achieve better separation of concerns.
        
        bool should_reverse = true; 
        if (len <= 2) {
            for (int i = 0; i < 2; i++) {
                if (isalpha(line[i])) {
                    putchar(line[i]);
                } else {
                    should_reverse = false;
                } 
            }
        }
        if (!should_reverse) continue;        
        reverse(line, reversed_line);
        printf("%s\n", reversed_line);
    }

    exit(EXIT_SUCCESS);
}

void init_menu()
{
    printf("===================================\n");
    printf("== line reverser, type anything. ==\n");
    printf("===================================\n");
}

int my_getline(char s[], int max)
{
    int c, i;
    for (i = 0; i < max - 1 && (c = getchar()) != EOF && c != '\n'; i++) {
        s[i] = c;
    }
    if (c == '\n') {
        s[i] = c;
        i++;
    }
    s[i] = '\0';
    return i; // The input length
} 

void reverse(char s[], char reversed[])
{
    int i = 0, j = strlen(s) - 1; 

    while (s[j] == '\n') 
        j--; // finds last valid character index

    while ((j + 1) > 0) {
        reversed[i] = s[j];
        j--;
        i++; 
    }
    reversed[i + 1] = '\0';
}

