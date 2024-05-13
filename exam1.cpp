#include <stdio.h>

int main() {
    int a= 2; 
    int b = 0; 
    do {
        if (a % 2 == 0 && b < 8) {
            printf("%d ", a);
            b++;     
        } else if (b == 8) {
        b= 0;    
        }
        a += 8; 
    } while (a <= 50);

    return 0;
}

