#include <stdio.h>
int* findMin(int *a, int *b) {
    if (*a < *b) {
        return a;
    } else {
        return b;
    }
}
int main() {
    int x = 10;
    int y = 20;
    int *minPtr = findMin(&x, &y);
    printf("The minimum value is: %d\n", *minPtr);    
    return 0;
}

