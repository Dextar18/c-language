#include <stdio.h>

// Function definition
void calculateCube(int num) {
    int cube = num * num * num;
    printf("The cube of %d is: %d\n", num, cube);
}


// Main function
int main() {
    int number;

    // Prompt the user to enter an integer
    printf("Enter a number: ");
    scanf("%d", &number);

    // Call the calculateCube function
    calculateCube(number);

    // Function prototype
void calculateCube(int num);

}


