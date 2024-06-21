#include <stdio.h>
struct Movie {
    char title[100];
    char genre[50];
    char language[50];
};

int main() {
    int N;
    printf("Enter the number of movies: ");
    scanf("%d", &N);
    struct Movie movies[N];

    for (int i = 0; i < N; i++) {
        printf("Enter details for movie %d:\n", i + 1);

        printf("Title: ");
        scanf(" %[^\n]", movies[i].title);  

        printf("Genre: ");
        scanf(" %[^\n]", movies[i].genre);

        printf("Language: ");
        scanf(" %[^\n]", movies[i].language);
    }

    printf("\nList of Movies:\n");
    for (int i = 0; i < N; i++) {
        printf("Movie %d:\n", i + 1);
        printf("Title: %s\n", movies[i].title);
        printf("Genre: %s\n", movies[i].genre);
        printf("Language: %s\n", movies[i].language);
        printf("\n");
    }

    return 0;
}
