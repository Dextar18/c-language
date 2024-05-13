#include <stdio.h>

int main() {
    int size;
    
    printf("Enter the size of the array: ");
    scanf("%d", &size);
  
    int arr[size];
  
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
 
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
 
    float average = (float)sum / size;
    
    printf("The average of the elements of the array is: %.2f\n", average);
    
    return 0;
}

