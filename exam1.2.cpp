#include <stdio.h>

int main() {
    int i, j, spaces;
    for (i = 5; i >= 1; i--) {
        for (spaces = 1; spaces < i; spaces++) {
            printf("  "); // Print spaces
        }
        for (j = i; j <= 5; j++) {
            printf("%d ", j); // Print numbers
        }
        printf("\n");
    }
    return 0;
}
