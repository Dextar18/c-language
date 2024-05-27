#include <stdio.h>
int fibonacci(int *n) {
    if (*n == 0) {
        return 0;
    } else if (*n == 1) {
        return 1;
    } else {
        int n1 = *n - 1;
        int n2 = *n - 2;
        return fibonacci(&n1) + fibonacci(&n2);
    }
}
void printFibonacciSeries(int *num) {
    for (int i = 0; i < *num; i++) {
        int temp = i;
        printf("%d ", fibonacci(&temp));
    }
    printf("\n");
}
int main() {
    int number;
    printf("Enter the number of terms: ");
    scanf("%d", &number);
    
    if (number < 0) {
        printf("Number of terms should be non-negative.\n");
    } else {
        printf("Fibonacci series up to %d terms:\n", number);
        printFibonacciSeries(&number);
    }
    
    return 0;
}

