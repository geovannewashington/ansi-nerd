#include <stdio.h>
#include <stdbool.h> 

#define MAXLINE 1000 // maximum input line length

int my_getline(char line[], int maxline);
void copy(char to[], char from[]);

/* print the longest input line */
int main()
{
    int len; // current line length
    int max; // maximum length seen so far
    char line[MAXLINE]; // current input line
    char longest[MAXLINE]; // longest line saved here 
    
    max = 0;
    while ((len = my_getline(line, MAXLINE)) > 0) 
        if (len > max) {
            max = len;
            copy(longest, line);
        }

    // In theory this could print more than 1000
    printf("length of longest input: %d\n", max);
    printf("%s\n", longest);
    return 0;
}

// my_getline: read a line into s, return lenght
//  NOTE: lim == BUFFER/LIMITER of 1000

int my_getline(char s[], int lim)
{
    // [FLAG]: initially 'i' is less than the limit (buffer/1000)
    bool is_out_of_bounds = false;
    // so j is our variable that can get out of bounds, that is, it can higher than 1000 chars
    int c, i, j = 0; 
     
    //  this loops runs from i == 0 to i < 999, that is, 999 times.
    // TODO: I need a way of keep counting the 'i' variable regardless of the size of the string 
    for (i = 0; (c = getchar()) != EOF && c != '\n'; ) {
        // if i == 999 it's out of bound
        if (i == (lim - 1))
            is_out_of_bounds = true;
        
        j++;
        if (is_out_of_bounds) {
            // if 'i' is out of bounds we increment the i variable but we do not try to assign the character the array
            continue;
        }
        
        // 'i' can only be increment up to 999, which is the buffer limit.
        i++;
        s[i] = c;
    }
    // only runs if the last character is a newline char and we are not out of bounds
    if (c == '\n') {
        s[i] = c;
        i++;
    }
    // We're adding a null character at the end of the string regardless if it's a newline character or not
    // that's why the loop runs only lim - 1 times (so that we have a final spot to the null character)
    // NOTE: at this point 'i' can be up to 1000, which is the buffer.

    s[i] = '\0';
    return j;
}

// copy: copy 'from' into 'to'; assume to is big enough
void copy(char to[], char from[])
{
    int i = 0;
    while ((to[i] = from[i]) != '\0')
        i++;
}
