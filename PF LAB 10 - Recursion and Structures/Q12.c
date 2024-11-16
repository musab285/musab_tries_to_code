//12. Write a program that use a structure to hold information about movies, such as title,
//genre, director, release year, and rating. Write a program that allows users to add new
//movies, search for movies by genre, and display all movie details.


#include <stdio.h>
#include <string.h>

#define MAX_MOVIES 100


struct Movie {
    char title[100];
    char genre[50];
    char director[50];
    int releaseYear;
    float rating;
};

void addMovie(struct Movie movies[], int *count) {
    if (*count >= MAX_MOVIES) {
        printf("Cannot add more movies. Maximum limit reached.\n");
        return;
    }
    printf("Enter movie title: ");
    getchar();  
    fgets(movies[*count].title, sizeof(movies[*count].title), stdin);
    movies[*count].title[strcspn(movies[*count].title, "\n")] = '\0';

    printf("Enter genre: ");
    fgets(movies[*count].genre, sizeof(movies[*count].genre), stdin);
    movies[*count].genre[strcspn(movies[*count].genre, "\n")] = '\0';

    printf("Enter director: ");
    fgets(movies[*count].director, sizeof(movies[*count].director), stdin);
    movies[*count].director[strcspn(movies[*count].director, "\n")] = '\0';

    printf("Enter release year: ");
    scanf("%d", &movies[*count].releaseYear);

    printf("Enter rating (0.0 to 10.0): ");
    scanf("%f", &movies[*count].rating);

    (*count)++;
    printf("Movie added successfully.\n");
}


void searchMoviesByGenre(struct Movie movies[], int count, const char *genre) {
    int found = 0;
    for (int i = 0; i < count; i++) {
        if (strcasecmp(movies[i].genre, genre) == 0) {
            printf("\nTitle: %s\n", movies[i].title);
            printf("Genre: %s\n", movies[i].genre);
            printf("Director: %s\n", movies[i].director);
            printf("Release Year: %d\n", movies[i].releaseYear);
            printf("Rating: %.1f\n", movies[i].rating);
            found = 1;
        }
    }
    if (!found) {
        printf("No movies found in the genre \"%s\".\n", genre);
    }
}


void displayAllMovies(struct Movie movies[], int count) {
    if (count == 0) {
        printf("No movies to display.\n");
        return;
    }
    for (int i = 0; i < count; i++) {
        printf("\n--- Movie %d ---\n", i + 1);
        printf("Title: %s\n", movies[i].title);
        printf("Genre: %s\n", movies[i].genre);
        printf("Director: %s\n", movies[i].director);
        printf("Release Year: %d\n", movies[i].releaseYear);
        printf("Rating: %.1f\n", movies[i].rating);
    }
}

int main() {
    struct Movie movies[MAX_MOVIES];
    int count = 0;
    int choice;
    char genre[50];

    while (1) {
        printf("\nMenu:\n");
        printf("1. Add New Movie\n");
        printf("2. Search Movies by Genre\n");
        printf("3. Display All Movies\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addMovie(movies, &count);
                break;

            case 2:
                printf("Enter genre to search: ");
                getchar();  
                fgets(genre, sizeof(genre), stdin);
                genre[strcspn(genre, "\n")] = '\0';
                searchMoviesByGenre(movies, count, genre);
                break;

            case 3:
                displayAllMovies(movies, count);
                break;

            case 4:
                printf("Exiting the program.\n");
                return 0;

            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
