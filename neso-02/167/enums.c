// Neso Academy - Class n. 167: 
// Enumerations in C

#include <stdio.h>
#include <stdlib.h>

// 1. An enumerated type is a user defined type which is used to assign names to integral constants
// because names are easier to handle in a program.

// 2. Why use enums and not macros? 
// Because of two important points, among many other reasons:
// 1) Enums can be declared in the local scope
// 2) Enum names are automatically initialized by the compiler

// 3. Some important facts
// We can assign values in any order, all unassigned names will get value as value of previous name + 1
// For instance: enum point {y = 2, x = 34, t, z = 0}; t will be x + 1 = 35

// Only integral values are allowed

// All enum constant must be unique in their scope:
// enum point1 { x = 34, y = 2, z = 0};
// enum point1 { x = 34, p = 25, q = 1}; -> Here we are redeclaring x in the same scope, this is an error

// By default, if no values are assigned compiler will automatically assign values starting from 0
typedef enum { True, False } Bool;

enum Colors { RED, GREEN, BLUE };

struct Product_info {
    enum Colors color;
    
    union {
        double price; 
        const char *name;
    };
};

void print_color(struct Product_info *p)
{
    switch (p->color) {
        case RED: 
            puts("You chose a red mug!");
            break;

        case GREEN:
            puts("You chose a green mug!");
            break;
       
        case BLUE:
            puts("You chose a blue mug!");
            break;
        
        default:
            puts("Sorry. We don't have this color yet :/");
    }
}

int main() 
{
    struct Product_info mug;
    mug.color = BLUE; 
    
    print_color(&mug);
    return EXIT_SUCCESS;
}
