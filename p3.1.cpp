#include <stdio.h>

int calculateSumOfSquares(int n) {
    int sum = 0;
    for (int i = 2; i <= n; i += 2) {
        sum += i * i;
    }   
    return sum;
}
int main() {
    int n, sum;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    sum = calculateSumOfSquares(n);
    printf("The sum of squares of all even numbers from 1 to %d is: %d\n", n, sum);
  int calculateSumOfSquares(int n);
}


