#include <stdio.h>

int main() {
    int size, sum = 0;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);   
        sum += arr[i];
    }
    printf("The sum of the elements of the array is: %d\n", sum);
    
    return 0;
}

