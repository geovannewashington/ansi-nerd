#include <stdio.h>
#define MAXLINE 1000

int get_line(char line[], int maxline);
void copy(char to[], char from[]);

// print the longest input line
int main(int argc, char *argv[])
{
    int len;                // currrent line length
    int max;                // maximum length seen so far
    char line[MAXLINE];     // current input line
    char longest[MAXLINE];  // longest line saved here

    max = 0;
    while ((len = get_line(line, MAXLINE)) > 0)
        if (len > max) {
            max = len;
            copy(longest, line);
        }
    
    // there was a line.
    if (max > 0) {
        printf("Lenght: %d\n", max);
        printf("%s\n", longest);
    }
    return 0;
}

// getline: read a line into s, return length
int get_line(char s[], int lim)
{
    //  TODO: Counter the lenght regardless of buffer size.
    //  BUG: Pressing enter (\n) won't exit the for loop, only EOF works. 
    // it does get of the loop, it just still reading data for some reason.
    int c, i;
    for (i = 0; (c = getchar()) != EOF && c != '\n'; ++i) {
        if (i < lim - 1)
            s[i] = c;
    }
    
    if (c == '\n') {
        s[lim] = c;
        ++i;
    } 
    s[i] = '\0';
    return i;
}

// copy: copy 'from' into 'to'; assume to is big enough;
void copy(char to[], char from[]) 
{
    int i = 0;
    while ((to[i] = from[i]) != '\0')
        ++i;
}










