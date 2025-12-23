// Neso Academy - Class n. 146: 
// Strings (Solved Problem 5) 

// What is the output? 
// a) Hi Bye Bye Hi 
// b) Hi Bye Hi Bye 
// c) Bye Hi Hi Bye 
// d) Bye Hi Bye Hi 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void fun1(char *s1, char *s2) 
{
    // In this function we are not dereferencing anything... 
    // those variables are treated as locals.
    
    char *tmp;
    tmp = s1;
    s1 = s2; 
    s2 = tmp;
}

void fun2(char **s1, char **s2) 
{
    char *tmp;
    tmp = *s1; // tmp = address of pointer s1
    *s1 = *s2; // s1 = address of pointer s2
    *s2 = tmp; // s2 = value of tmp
}

int main()
{
    char *str1 = "Hi", *str2 = "Bye";
    // Passing the values of the pointers...
    fun1(str1, str2);   printf("%s %s ", str1, str2); // Hi Bye 
    // Passing the addrss of the pointes itself
    fun2(&str1, &str2); printf("%s %s\n", str1, str2); // Bye Hi
    return EXIT_SUCCESS;
}
