#include <stdio.h>

#define SIZE 10

void arrayPrint(int array[], int size) {
    int last = size - 1;

    for ( int i = 0; i < last; i++ ) {
        printf("%d ", array[i]);
    }
    printf("%d\n", array[last]);
}

void arrayIncrement(int array[], int size) {
    for ( int i = 0; i < size; i++ ) {
        array[i] += 1;
    }
}

int main() {
    int array[SIZE] = {1,2,3,4,5,6,7,8,9,10};

    arrayPrint(array, SIZE);
    arrayIncrement(array, SIZE);
    arrayPrint(array, SIZE);

    return 0;
}
