#include <stdio.h>

int main() {
    int N;
    
    
    printf("Enter any number: ");
    scanf("%d", &N);
    
    
    while (N >= 1) {
        if (N % 2 != 0) {
            printf("%d ", N);
        }
        N--;
    }
    
    return 0;
}

