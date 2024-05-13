#include <stdio.h>
 
int main() {
    int startYear, endYear;
    
    
    printf("Enter the first number: ");
    scanf("%d", &startYear);
    
    
    printf("Enter the second number: ");
    scanf("%d", &endYear);
    
   
    printf("Leap years between %d and %d: ", startYear, endYear);
    while (startYear <= endYear) {
        if ((startYear % 4 == 0 && startYear % 100 != 0) || (startYear % 400 == 0)) {
            printf("%d, ", startYear);
        }
        startYear++;
    }
    
    return 0;
}

