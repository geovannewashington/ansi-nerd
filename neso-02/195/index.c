#include <stdio.h>
#include <stdlib.h>

struct Point {
    int x;
    int y;
};

void 
print_point(struct Point* point) 
{
    printf("x: %d, y: %d\n", point->x, point->y);
    point->x -= 10;
}

int 
main()
{
    struct Point point_01 = { 355, 200 }; 
    
    print_point(&point_01);
    print_point(&point_01);
    return EXIT_SUCCESS;
}
