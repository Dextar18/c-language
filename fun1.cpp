#include <stdio.h>

void addNumbers(int a, int b){
    int sum = a + b;
    printf("The sum of %d and %d is: %d\n", a, b, sum);
}
int main() {
    int num1, num2;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
	addNumbers(num1, num2);
	void addNumbers(int a, int b) ;
}


