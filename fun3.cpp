#include <stdio.h>

void divideNumbers(int a, int b) {
    if (b == 0) {
        printf("Error: Division by zero is not allowed.\n");
    } else {
        double quotient = (double)a / b;
        printf("The quotient of %d divided by %d is: %.2f\n", a, b, quotient);
    }
}


void main() {
    int num1, num2;

    printf("Enter the numerator: ");
    scanf("%d", &num1);
    printf("Enter the denominator: ");
    scanf("%d", &num2);


    divideNumbers(num1, num2);

    
}



