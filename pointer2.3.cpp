#include <stdio.h>
int* findMax(int *a, int *b) {
    if (*a > *b) {
        return a;
    } else {
        return b;
    }
}
int main() {
    int x = 10;
    int y = 20;
    int *maxPtr = findMax(&x, &y);
    printf("The maximum value is: %d\n", *maxPtr);    
    return 0;
}

