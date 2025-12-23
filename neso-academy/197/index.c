#include <stdio.h>
#include <stdlib.h>

typedef struct Point {
    int x;
    int y;
} Point;

Point increment_point(struct Point point) {
    point.x++; 
    point.y = point.y + 5;
    return point;
}

void print_point(Point* point) {
    printf("x: %d, y: %d\n", point->x, point->y);
    point->x -= 10;
}

int main() {
    Point point_01 = { 355, 200 }; 
    
    print_point(&point_01);
    point_01 = increment_point(point_01);
    print_point(&point_01);
    return EXIT_SUCCESS;
}
