// Two ways of declaring a struct

#include <stdio.h> 
#include <stdlib.h> 

int main()
{
    // 1. Anonymous struct
    struct {
        // -> Anonymous struct type (it has no name/tag)
        // -> We directly declared variables car1 and car2 of this type at the same time.
        // This struct cannot be used elsewhere, because it doesn't have a name
        // fields...
    } car1, car2;


    // 2. Named struct (with tag)
    struct Cars {
        // fields;
    };

    // -> We can create as many variables as we want of type (struct Cars)
    // -> This type is reusable accross functions/files 
    struct Cars car3;
    struct Cars car4;
    
    return EXIT_SUCCESS;
}
