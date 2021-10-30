#include <stdio.h>

#define SIZE 10

int main() {
    int array[SIZE] = {1,2,3,4,5,6,7,8,9,10};
    int last = SIZE - 1;

    for ( int i = 0; i < last; i++ ) {
        printf("%d ", array[i]);
    }
    printf("%d\n", array[last]);

    return 0;
}
