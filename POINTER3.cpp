#include <stdio.h>
int main() {
    int intVar;
    float floatVar;
    char charVar;

    int *intPtr;
    float *floatPtr;
    char *charPtr;

    intPtr = &intVar;
    floatPtr = &floatVar;
    charPtr = &charVar;

    *intPtr = 10;
    *floatPtr = 3.14;
    *charPtr = 'A';
    printf("Integer value: %d\n", *intPtr);
    printf("Float value: %.2f\n", *floatPtr);
    printf("Character value: %c\n", *charPtr);

    return 0;
}

