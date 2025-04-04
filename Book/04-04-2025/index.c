#include <stdio.h>
#define MAXLINE 7 /* maximum input line length */

// TODO: Exercise 1-16, I need to change program's logic in order to print correctly 
// a line that exceeds the current buffer of 1000 character per sentence  

int my_getline(char line[], int maxline);
void copy(char to[], char from[]);

/* print the longest input line */
int main(void)
{
    int max = 0;
    int len;
    char line[MAXLINE];          /* current line length */
    char longest[MAXLINE];       /* longest line saved here */
    
    while((len = my_getline(line, MAXLINE)) > 0)
        if (len > max) {
            max = len;
            copy(longest, line);
        }
    if (max > 0) // there was a line
        printf("%s", longest);
    return 0;
}

/* my_getline: read a line into s, return length */
int my_getline(char s[], int lim) 
{
    int c, i;

    // from i = 0 to i < lim - 1, which, is this case, from 0 to 4, that's five iterations
    for (i = 0; i < lim-1 && (c = getchar()) != EOF && c != '\n'; ++i) {
        printf("iteration number: %i\n", i);
        s[i] = c;
    }
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0'; // null operator
    return i;
}

/* Copy 'from' into 'to' */
void copy(char to[], char from[])
{
    int i = 0;

    while ((to[i] = from[i]) != '\0')
        i++;
}


