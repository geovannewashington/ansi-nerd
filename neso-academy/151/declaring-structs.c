// Neso Academy - Class n. 151: 
// Declaring Structure Variables 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// A structure is a user defined data type that can be used to group elements of different types 
// into a single type. (the syntax reminds me of objects in JavaScript, a little bit...)

// Example:
/*
struct {
    char *brand;
} car1, car2;
*/
struct Car {
    char *brand;
};

struct Car cars[3];

int main(int argc, char *argv[])
{
    /* car1.brand = "BMW";
    car2.brand = "Hyundai";
    
    printf("%s\n", car1.brand);
    printf("%s\n", car2.brand); */
    
    for (int i = 0; i < 3; i++) cars[i].brand = argv[i];
    
    for (int i = 1; i < 3; i++) printf("Brand %i: [%s]\n", i, cars[i].brand);

    return EXIT_SUCCESS;
}
