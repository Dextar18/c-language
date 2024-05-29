#include <stdio.h>

int main() {
    char str[] = "abhi";
    int length = sizeof(str) / sizeof(str[0]);
    char *ptrArr[length];  
    for (int i = 0; i < length; i++) {
        ptrArr[i] = &str[i];  
    }
    printf("String using array of pointers:\n");
    for (int i = 0; ptrArr[i] != '\0'; i++) {
        printf("%c", *ptrArr[i]);  
    }
    printf("\n");

    return 0;
}

