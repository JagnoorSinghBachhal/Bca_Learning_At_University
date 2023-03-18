//Write a C code to find the number of distinct elements in a sorted array.

#include <stdio.h>
#define n 9

int main() {
    int array[n] = {1, 2, 2, 2, 4, 4, 4, 5, 5};
    int i, count = 1;
    printf("Array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
    for (i=1;i<n;i++) {
        if (array[i]!=array[i-1]) {
            count++;
        }
    }
    printf("Number of distinct elements: %d\n", count);
    return 0;
}

