#include <stdio.h>

int main() {
    char str[] = "abhi, patel";
    char *ptr = str; 

    printf("String characters using pointer:\n");
    while (*ptr != '\0') { 
        printf("%c", *ptr);  
        ptr++;  
    }
    printf("\n");

    return 0;
}

