#include <stdio.h>
#include <stdlib.h>

// Neso Academy - Class n. 77: 
// An example program of indirect recursion

// Defining indirect recursion: It's a type of recursion that occurs indirectly, that is, the function 
// doesn't call itself directory, instead get's called within another function. 

// prints ten numbers (starting from 1), adding 1 to odd numbers and subtracting 1 from even ones.
// Original:        1 2 3 4 5 6 7 8 9 10
// Expected output: 2 1 4 3 6 5 8 7 10 9 

void odd();
void even();
int n = 1;

int main(int argc, char *argv[]) 
{
    odd();
    printf("\n");
    puts("Cheguei aqui...");
}

// NOTE: when we omit return statements from void functions, control automatically returns to the calling 
// function after the last statement of the void function is executed.
void odd()
{
    if (n <= 10) {
        printf("%d ", n + 1);
        n++;
        even();
    }
    // return; // Even without this return statement the program still returns to main.
}

void even()
{
    if (n <= 10) {
        printf("%d ", n - 1);
        n++;
        odd();
    }
    // return;
}
