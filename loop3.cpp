#include <stdio.h>

int main() {
    int N;
    
   
    printf("Enter any number: ");
    scanf("%d", &N);
    
    int i = 2; 
    do {
        printf("%d ", i);
        i += 2; 
    } while (i <= N);

    return 0;
}

