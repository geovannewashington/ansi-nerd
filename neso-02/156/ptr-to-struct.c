// Neso Academy - Class n. 156: 
// Pointer to Structure Variable  

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    float price; 
    int stock;
} Product;

int main() 
{
    Product mug = { .price = 12.99, .stock = 5 };
    Product *ptr = &mug;

    // Accessing the elements of mug through the pointer ptr
    // We use the 'arrow operator', this operator combines deferencing the pointer and accessing a 
    // member.
    
    // ptr->x is equivalent to (*ptr).x
    printf("Price: %.2f$ | Available on stock: %d\n", ptr->price, ptr->stock);

    return EXIT_SUCCESS;
}
