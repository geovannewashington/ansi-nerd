# Traversing a Single Linked List (Counting the Nodes)

The general idea is: pass the header to the function as an argument, assign the address of a local
pointer that keeps reassigning itself with it's link until NULL is found, that's the end of the single linked list.
Also, initially we check if the passed header is NULL, if it is it means it's empty.
