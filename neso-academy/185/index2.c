#include <stdio.h>
#include <stdlib.h>

// Example:

#define MAX 10

void print_arr(int *arr, int arr_size);

int main(void)
{
    int pos = 0;
    int num;
    int max_pos = MAX;

    int *arr;
    arr = (int *)calloc(10, sizeof(int));
    
    while (1) {
        scanf("%d", &num);
        if (num == -1) {
            break;
        }
        arr[pos++] = num;

        if (pos >= max_pos) {
            max_pos += MAX;
            arr = realloc(arr, max_pos * sizeof(int));
        }
    }
    
    print_arr(arr, pos);
    return 0;
}

void print_arr(int *arr, int arr_size)
{
    for (int i = 0; i < arr_size; i++) {
        printf("%d", arr[i]);
    }
    printf("\n");
}
