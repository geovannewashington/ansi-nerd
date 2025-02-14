#include <stdio.h>

int main(void)
{
        long nc = 0;

        while (getchar() != EOF) {
                ++nc;
        }

        printf("%ld characters were typed\n", nc - 3);
        return 0;
}