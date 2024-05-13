#include <stdio.h>

int main() {
    int size;
    printf("Enter array size: ");
    scanf("%d", &size);
    int arr[size];
    printf("\nEnter array elements:\n");
    for (int i = 0; i < size; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &arr[i]);
    }
    printf("\nThe squares are: ");
    for (int i = 0; i < size; i++) {
        printf("%d", arr[i] * arr[i]);
        if (i != size - 1) {
            printf(", ");
        }
    }
    printf("\n");    
    return 0;
}

