// Neso Academy - Class n. 141: 
// String Comparison Function - strcmp()  

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// strcmp function
// function signature:
// int strcmp(const char *s1, const char *s2); 
// used to compare two strings 

// returns 0 if s1 == s2, nagative value if s1 < s2, positive value if s1 > s2
// but what does it mean to be less or greater?
// lexicograhically less (simply means coming before in the ASCII table)
// The general order is: Non-printable characters, blank spaces, numbers, uppercases, lowercases
// abca < abcc: even tho the first three characters are the same, the fourth ('a') of the first 
// string is less than the fourth of the second string ('c')

// What also defines if a string is greater than the order is its lenght

// Example program
int main(int argc, char *argv[])
{
    char *current_month = "september";
    
    if (argc < 2) {
        fprintf(stderr, "%s\n", "Not enough arugments, exiting...");
        return EXIT_FAILURE;
    }
    
    if (strcmp(current_month, argv[1]) == 0)
        puts("Yes! you got it right.");
    else 
        puts("Wrong month, :( better luck next time");
    return EXIT_SUCCESS;
}
