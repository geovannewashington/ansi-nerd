#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
 
typedef uint8_t BYTE;

typedef struct RGB_COLOR {
    BYTE red;
    BYTE green;
    BYTE blue;
} RGB_COLOR;

void init_line(RGB_COLOR* line, int line_len) {
    for (int i = 0; i < line_len; i++) {
        if (i == 0) {
            line[i].red   = 255;
            line[i].green = 0;
            line[i].blue  = 0;
        }
        line[i].red   = line[i - 1].red + 12;
        line[i].green = line[i - 1].green + 8;
        line[i].blue  = line[i - 1].blue + 40;
    }        
}

void print_line(RGB_COLOR* line, int line_len) {
    for (int i = 0; i < line_len; i++) {
        printf("Dot n. %d - red: %d, green: %d, blue: %d\n", i, line[i].red, line[i].green, 
                line[i].blue);
    }        
}

int main()
{
    const int LINE_LEN = 5;
    RGB_COLOR line[LINE_LEN];
    
    init_line (line, LINE_LEN);
    print_line(line, LINE_LEN);
    return EXIT_SUCCESS;
}
