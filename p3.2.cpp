#include <stdio.h>

float calculateArea(float length, float width);

int main() {
    float length, width, area;
    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);
    printf("Enter the width of the rectangle: ");
    scanf("%f", &width);
    area = calculateArea(length, width);
    printf("The area of the rectangle is: %.2f\n", area);
    
    return 0;
}
float calculateArea(float length, float width) {
    return length * width;
}

