#include <stdio.h>

int main() {
    int b[] = {10, 20, 30, 40}; // initialize array
    int *bPtr = b;              // pointer to array

    printf("Using Array Subscript Notation (b[i]):\n");
    for (int i = 0; i < 4; i++) {
        printf("b[%d] = %d\n", i, b[i]);
    }

    printf("\nUsing Pointer/Offset Notation (*(b + i)):\n");
    for (int i = 0; i < 4; i++) {
        printf("*(b + %d) = %d\n", i, *(b + i));
    }

    printf("\nUsing Pointer Subscript Notation (bPtr[i]):\n");
    for (int i = 0; i < 4; i++) {
        printf("bPtr[%d] = %d\n", i, bPtr[i]);
    }

    printf("\nUsing Pointer/Offset Notation with Pointer (*(bPtr + i)):\n");
    for (int i = 0; i < 4; i++) {
        printf("*(bPtr + %d) = %d\n", i, *(bPtr + i));
    }

    return 0;
}