#include <stdio.h>
#include <stdlib.h>

typedef struct Point {
    int x;
    int y;
} Point;

Point* func(int a, int b) {
    Point* ptr = (Point*)malloc(sizeof(Point));
    if (ptr == NULL) {
        fprintf(stderr, "Allocation error:");
        exit(EXIT_SUCCESS);
    }
    ptr->x = a;
    ptr->y = b + 5;
    return ptr;
}

void print_point(Point* point) {
    printf("x: %d, y: %d\n", point->x, point->y);
}

int main() {
    Point *ptr1 = NULL;
    Point *ptr2 = NULL;

    ptr1 = func(255, 127);
    ptr2 = func(350, 400);
    
    print_point(ptr1);
    print_point(ptr2);

    free(ptr1);
    free(ptr2);
    return EXIT_SUCCESS;
}
