// K&R book, exercise n. 1-18
// Write a program to remove trailing blank spaces (spaces at the end) and tabs from each line 
// of input and delete entirely blank lines. (simply do not print it)

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#define MAX 1000 // How long can line be

int my_getline(char s[], int max);
void remove_trailings(char to[], char from[]);

int main(int argc, char *argv[])
{
    // Gets input from user, It's one line at a time.
    
    // We need to exit loop if there's no more input (len = 0)
    // Program should terminate itself, when there's no more lines.
    
    FILE *fp;
    
    char current_line[MAX]; // current line input, gets overwritten every while iteration
    char fixed_line[MAX];   // line without the trailing spaces.
    int len;
    
    // Opens the out.txt file in write mode... just for test purposes
    fp = fopen("out.txt", "w");   

    while ((len = my_getline(current_line, MAX)) > 0) {
        // Note that a single newline character ('\n') is a valid line, we just don't print it. }
        // while there is a line, we keep cutting down trailing spaces.
        // NOTE: we got remove blank spaces (' ') and '\t'
       
        // if line is a single newline character
        // we don't remove any trailings (don't call function)
        // we don't print anything on the screen.
        remove_trailings(fixed_line, current_line);
        
        if (len == 1 || strlen(fixed_line) == 1) 
            continue;
        
        printf("%s", fixed_line);
        
        fprintf(fp, "%s", fixed_line);
        fclose(fp);
    }

    return EXIT_SUCCESS;
}

int my_getline(char s[], int max)
{
    int c, i;
    for (i = 0; i < max - 1 &&(c = getchar()) != EOF && c != '\n'; i++) {
        s[i] = c;
    }
    if (c == '\n') {
        s[i] = c;
        i++;
    }
    s[i] = '\0';
    return i; // The input length
}

// from is the original line that might contain the trailing spaces.
// to is the fixed line, that is, without the trailing spaces.
// this function will only called when line is at least 2 characters long.
void remove_trailings(char to[], char from[]) 
{
    // strlen returns the total length until \0
    // so if array is, e.g.: 'tpose\n\0', strlen will return 6
    // and therefore the last element is strlen(arr) - 2
    // from_len can only be, at minimum 2
    int i = 0, from_len = strlen(from); 
    int last_valid_pos = 0;
    
    for (i = from_len - 2; i > 0; i--) {
        if (from[i] != ' ' && from[i] != '\t') {
            last_valid_pos = i;
            break;
        }
    }
    // We got prevent somehow from copying wihtout the need for it.
    // if (last_valid_pos == from[from_len - 1]) return;
    
    for (i = 0; i <= last_valid_pos; i++) {
        to[i] = from[i];
    }

    to[i] = '\n';
    to[i + 1] = '\0';
}








