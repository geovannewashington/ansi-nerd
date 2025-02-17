#include <stdio.h>

//function prototype:
int func();

int main(void)
{
        /* -> scope of this variable 'var' is local to main function ONLY! 
        therefore called LOCAL to main() function. */
        int var = 30; 
        
        printf("%d\n", var);  
        return 0;
}

int func()
{
        printf("%d\n", var); // -> var is not available here...
        // VSCODE says: identifier 'var' in undefined
}


/*
{
...some A
        {
                ...code C
        }
...code B
}

*/

void A() {
        int b = 10; // Code B
        {   // Code C
                printf("Value of b: %d\n", b); // ✅ Accessible
        }
}
