// Neso Academy - Class n. 131: 
// String Literals vs. Character Constant 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// #include <string.h> // -> We could use the strlen function

// The signature of strlen: 
// size_t strlen(const char *str);
// Note that size_t is an unsigned integer, ensuring that the function can return the length 
// of even very long strings.
// %lu -> long unsiged is the correct format specifier in this case.

// ------------------------------------------------------------
// But we could also implement something ourselves just for fun
// ------------------------------------------------------------

/* 
int get_str_len(const char *str)
{
    int i = 0;
    while (*(str + i) != '\0') i++;
    return i;
} 
*/

size_t str_len(const char *s)
{
    const char *p = s;
    while (*p) p++; // since '\0' evaluates to false
    return p - s;
}
// Note that, the null characterm, represented as '\0', evaluates as false in a boolean context.

int main(void) 
{
    const char *user_name = "John Doe";
    
    // I want to know the length of user_name
    size_t length = str_len(user_name); // user_name decays to const char *
    printf("The string is %lu characters long\n", length); // The string is 8 characters long
    return EXIT_SUCCESS;
}
