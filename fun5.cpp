#include <stdio.h>
void calculateCube(int num) {
    int cube = num * num ;
    printf("The cube of %d is: %d\n", num, cube);
}
int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    calculateCube(number);
void calculateCube(int num);
}


