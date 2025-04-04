#include <stdio.h>

/* Aula n. 42 - Loop Control Statements - break and continue */

void menu();


int main(int argc, char *argv[])
{
    int integer;
   
    do {
        menu();

        scanf("%d", &integer);
        if (integer < 0) {
            puts("Number cannot be negative");
            puts("Exiting program...");
            break;
        }
    } while(integer != 0);

    
    return 0;
}

void menu()
{
    puts("=====================================");
    puts("---- ENTER A NON-NEGATIVE NUMBER ----");
    puts("=====================================");
    putchar('\n');
}
