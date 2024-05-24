#include <stdio.h>

unsigned long long calculateFactorial(int n) {
unsigned long long result = 1;
    
    for (int i = 1; i <= n; i++) {
        result *= i;
    }    
    return result;
}
int main() {
    int n;
    unsigned long long factorial;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
        return 1;
    }
    factorial = calculateFactorial(n);
    printf("The factorial of %d is: %llu\n", n, factorial);
    
    unsigned long long calculateFactorial(int n);
}


