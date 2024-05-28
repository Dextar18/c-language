#include <stdio.h>

int main() {
    int x = 10;
    int *ptr1 = &x;    
    int **ptr2 = &ptr1;
    int ***ptr3 = &ptr2; 
    printf("Value of x using ptr1: %d\n", *ptr1);
    printf("Value of x using ptr2: %d\n", **ptr2);
    printf("Value of x using ptr3: %d\n", ***ptr3);
    
    return 0;
}

