#include <stdio.h>


/* Write a program to print a histogram of the lengths of words in its input */
/* drawing it horizontally is easier */
/* drawing it vertically is more difficult */

#define IN 1 
#define OUT 0
#define ROWS 20
#define COLS 10


void printArray(int arr[ROWS][COLS]);

int main(void)
{
    // wc = word_count 
    int c, state, wc, index;
    int line, line_length = 0;
    wc = 0;
    
    //fixed length
    // no máximo 20 linhas 
    // no máximo 10 caracteres por linha
    int wordsArr[20][10];

    while ((c = getchar()) != EOF) {
        if (c == '\n' || c == ' ' || c == '\t') {
            if (state == IN) {
                state = OUT;
                wordsArr[line][line_length] = '\0';
                ++line;
            }
        } else {
            if (state == OUT) {
                state = IN;
            } 
            ++line_length;
        }
    }
    printArray(wordsArr); 
    return 0;
}
void printArray(int arr[ROWS][COLS]) 
{
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%d", arr[i][j]);
        }
        printf("\n");
    }
}

