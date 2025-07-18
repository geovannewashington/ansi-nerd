#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Neso Academy class n. 59 - Check Leap Year

void leap_year(bool is_leap, int year) 
{
    (is_leap) ? printf("%d is leap year.\n", year) : printf("%d is not leap year.\n");
}

int main(int argc, char *argv[])
{
    bool is_leap_year = false;
    int year;
    puts("Enter the year: ");
    scanf("%d", &year);
    
    if (year % 400 == 0) {
        is_leap_year = true;
    } else if (year % 100 == 0) {
        is_leap_year = false;
    } else if (year % 4 == 0) {
        is_leap_year = true;
    }

    leap_year(is_leap_year, year); 

    exit(EXIT_SUCCESS);
}
