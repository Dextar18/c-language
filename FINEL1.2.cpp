#include <stdio.h>
void countVowels(const char *sentence, int counts[5]) {
    for (int i = 0; i < 5; i++) {
        counts[i] = 0;
    }
    for (int i = 0; sentence[i] != '\0'; i++) {
        switch (sentence[i]) {
            case 'a':
            case 'A':
                counts[0]++;
                break;
            case 'e':
            case 'E':
                counts[1]++;
                break;
            case 'i':
            case 'I':
                counts[2]++;
                break;
            case 'o':
            case 'O':
                counts[3]++;
                break;
            case 'u':
            case 'U':
                counts[4]++;
                break;
            default:
                
                break;
        }
    }
}

int main() {
    char sentence[1000];
    int vowelCounts[5];

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);


    countVowels(sentence, vowelCounts);


    printf("Vowel counts:\n");
    printf("a/A: %d\n", vowelCounts[0]);
    printf("e/E: %d\n", vowelCounts[1]);
    printf("i/I: %d\n", vowelCounts[2]);
    printf("o/O: %d\n", vowelCounts[3]);
    printf("u/U: %d\n", vowelCounts[4]);

    return 0;
}
