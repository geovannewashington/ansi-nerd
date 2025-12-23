// Neso Academy - Class n. 153: 
// Structure types and typedef 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 1. the typedef keyword with structs
// We can use typedef to define a type, or an alias to a whole struct. 
// So instead of writing 'struct <struct_name>' everytime we want to create a variable of that structe 
// type, is simply write the alias followed by the variable name...

struct Person {
    char *name;
    int age;
};

typedef struct Person Person_t; // Defining the type later...

// An anonymous struct
typedef struct {
    float anual_salary; 
} Employee_t; // Directly creating an alias to this struct

int main()
{
    // Person_t tpose;
    // tpose.name = "Geovanne";
    // tpose.age = 22;
   
    Employee_t john;
    john.anual_salary = 80.000;
    
    Employee_t ana;
    ana.anual_salary = 100.000;

    printf("John salary: %.3f\n", john.anual_salary); // -> John salary: 80000
    printf("Ana salary: %.3f\n", ana.anual_salary); // -> Ana salary: 100000
    return EXIT_SUCCESS;
}
