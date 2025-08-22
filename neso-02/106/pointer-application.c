// Neso Academy - Class n. 106: 
// Pointer Application (Finding the Largest & Smallest Elements in an Array) 

#include <stdio.h>
#include <stdlib.h>

void min_max(int arr[], int len, int *min, int *max) 
{
    *min = *max = arr[0];

    // Linear Search
    for (int i = 0; i < len; i++) {
        if (arr[i] > *max)
            *max = arr[i];
        if (arr[i] < *min)
            *min = arr[i];
    }
}

int main(void) 
{
    int a[] = {23, 4, 21, 98, 987, 45, 32, 10, 123, 986, 50, 3, 4, 5}; 
    int min, max;

    int len = sizeof(a) / sizeof(a[0]);
    min_max(a, len, &min, &max); 

    // Print result:
    printf("min: %d, max: %d\n", min, max); // min: 3, max: 987 
    return EXIT_SUCCESS;
}
