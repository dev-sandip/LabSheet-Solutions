//WAP to illustrate the concept of array of pointers and pointer to the array.
#include <stdio.h>

void arrayToPointer() {
    int a[] = {2, 4, 6, 8, 10};
    int *ptr[5];
    for (int i = 0; i < 5; i++) {
        ptr[i] = &a[i];
    }
    printf("Accessing elements using array of pointers:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d\t", *ptr[i]);
    }
}

void pointerToArray() {
    int a[] = {2, 4, 6, 8, 10};
    int *ptr = a;
    printf("\nAccessing elements using pointer to the array:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d\t", ptr[i]);
    }
}

int main() {
    arrayToPointer();
    pointerToArray();
    return 0;
}
