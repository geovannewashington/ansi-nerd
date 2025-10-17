// Neso Academy - Class n. 168: 
// Program to Find Area of Rectangle Using Structures 

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct point { int x, y; };

struct rectangle { 
    struct point upper_left, lower_right;  
};

void prompt_coordinates(struct rectangle *r)
{
    static int call_count = 0;
    char buff[1024];

    printf("x: ");    
    if (fgets(buff, sizeof(buff), stdin) != NULL) {
        if (call_count == 0)
            r->upper_left.x = atoi(buff);
        else 
            r->lower_right.x = atoi(buff);
    } else {
        fprintf(stderr, "Error reading input.\n");
    }

    printf("y: ");    
    if (fgets(buff, sizeof(buff), stdin) != NULL) {
        if (call_count == 0)
            r->upper_left.y = atoi(buff);
        else 
            r->lower_right.y = atoi(buff);
    } else {
        fprintf(stderr, "Error reading input.\n");
    }
    
    call_count++;
}

int calc_rec_area(struct rectangle r)
{
    // Area = w * h = | p1.x - p2.x | *  | p1.y - p2.y |
    return abs(r.upper_left.x - r.lower_right.x) * abs(r.upper_left.y - r.lower_right.y);
}

int main() 
{
    struct rectangle random_rec;
    
    printf("Enter the coordinates of upper left point :)\n");
    prompt_coordinates(&random_rec);
    
    printf("Enter the coordinates of lower right point :)\n");
    prompt_coordinates(&random_rec);

    // Calculate area:
    int area = calc_rec_area(random_rec);
    printf("Area of triangle is: %d\n", area);
    return EXIT_SUCCESS;
}
