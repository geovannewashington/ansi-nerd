#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

/* Neso Academy: aula n.50 */
// Special Programs in C - check if number is armstrong number.

//  NOTE: this program should be able to both receive the number as a command-line argument and 
//  if executed without any cli arguments it should ask the user for a number.

int is_armstrong(char number[]);

int main(int argc, char *argv[])
{
    // caso argc != 2 
    //    caso argc == 1, pedir o número e popular um array de char.
    //    caso argc > 2, printar usage, afim de ensinar o usuário a usar o programa.
    
    // NOTE: case argc == 2, number is argv[1]
    char number[100];
    
    // [FLAG]: array is not populated by default;
    int is_populated = 0;

    if (argc != 2) {
        if (argc == 1) {
            puts("Insert a number value: ");
            scanf("%s", number);
            number[strlen(number) + 1] = '\0'; 
            is_populated = 1;
        } else if (argc > 2) {
            printf("Usage: ./armstrong <number> OR ./armstrong\n");
            puts("Too many arguments passed");
            exit(1);
        }
    }
   
    // is_populated && printf("Number: %s\n", number) || printf("Number: %s\n", argv[1]);
    int result = is_populated && is_armstrong(number) || is_armstrong(argv[1]);
    
    if (result)
        puts("Number IS armstrong!");
    else 
        puts("Number is NOT armstrong!");
    return 0;
}

int is_armstrong(char number[]) 
{
    int expoent = strlen(number);
    int user_num = (int)atoi(number);
    int new_num = 0;

    for (int i = 0; i < expoent; i++)
        new_num += pow((number[i] - '0'), expoent); 

    return (user_num == new_num) ? 1 : 0;
}








