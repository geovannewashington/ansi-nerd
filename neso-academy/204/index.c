#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* link;
};

int main()
{
    struct node* head = (struct node*)malloc(sizeof(struct node));    
    
    if (head == NULL) {
        fprintf(stderr, "Allocation error\n");
        return EXIT_FAILURE;
    }

    head->data = 45;
    head->link = NULL;

    struct node* current = (struct node*)malloc(sizeof(struct node));    

    current->data = 90;
    current->link = NULL;
    head->link = current;
    
    current = (struct node*)malloc(sizeof(struct node)); 
    current->data = 3;
    current->link = NULL;

    head->link->link = current;

    free(head); head = NULL;
    free(current); current = NULL;
    return EXIT_SUCCESS;
}
