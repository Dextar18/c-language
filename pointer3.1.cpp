#include <stdio.h>
int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int *ptr = arr;  
    int size = sizeof(arr[0]);  ;  
    printf("Array elements using pointer:\n");
    for (int i = 0; i <=50; i++) {
        printf("%d \n", *(ptr + i));  
    }
}

