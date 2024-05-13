#include <stdio.h>

int main() {
    int N, num = 1;
    

    printf("Enter any number: ");
    scanf("%d", &N);
    
    
    while (num <= N) {
        printf("%d ", num);
        num++;
    }
    
    return 0;
}

