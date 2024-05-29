#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int *ptrArr[5]; 
    int size = sizeof(arr) / sizeof(arr[0]);  
    for (int i = 0; i < size; i++) {
        ptrArr[i] = &arr[i];  
    }
    printf("Array elements using array of pointers:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", *ptrArr[i]);  
    }
    return 0;
}

