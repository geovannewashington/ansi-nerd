#include <stdio.h>

/* Implements a functin that is able to print the current date and time */

void print_date();
void print_time();

int main(void)
{
        print_date();
        print_time();        
        return 0;
}

void print_date() {
        puts("M---D--Y----");
        printf("%s|\n", __DATE__);
        puts("------------");
}

void print_time() {
        puts("h--m--s----|");
        printf("%s   |\n", __TIME__);
        puts("------------");
}