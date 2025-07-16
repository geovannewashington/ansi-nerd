#include <stdio.h>

int main(void)
{
        unsigned int my_num = 32;
        printf("%zu", sizeof(my_num)); // -> IN BYTES: 2 or 4 (probably 4)
        return 0;
}


