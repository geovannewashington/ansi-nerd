#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* link;
};

int count_nodes(struct node* head) {
    if (head == NULL) { // linked list is empty
        return 0;
    } 
    struct node* current = head;
    int count = 0;
    while (current != NULL) {
        current = current->link;
        count++;
    }
    return count;
}

void print_llist_data(struct node* head) {
    if (head == NULL) { // linked list is empty
        return;
    } 

    struct node* current = head;
    while (current != NULL) {
        printf("%c", current->data);
        current = current->link;
    }
    printf("\n");
}

int main()
{
    struct node* head = (struct node*)malloc(sizeof(struct node));    
    
    if (head == NULL) {
        fprintf(stderr, "Allocation error\n");
        return EXIT_FAILURE;
    }

    head->data = 72;
    head->link = NULL;

    struct node* current = (struct node*)malloc(sizeof(struct node));    

    current->data = 73;
    current->link = NULL;
    head->link = current;
    
    current = (struct node*)malloc(sizeof(struct node)); 
    current->data = 33;
    current->link = NULL;

    head->link->link = current;
    
    int nodes_quant = count_nodes(head);
    printf("nodes: %d\n", nodes_quant);
    print_llist_data(head);

    free(head); head = NULL;
    free(current); current = NULL;
    return EXIT_SUCCESS;
}
