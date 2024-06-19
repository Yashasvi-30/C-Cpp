#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0)); // Seed for random number generation
    int correctNumber = rand() % 10 + 1; // Random number between 1 and 10
    int userGuess;

    do {
        printf("Guess the number (between 1 and 10): ");
        scanf("%d", &userGuess);

        if (userGuess > correctNumber) {
            printf("Too high! Try again.\n");
        } else if (userGuess < correctNumber) {
            printf("Too low! Try again.\n");
        } else {
            printf("Congratulations! You guessed the correct number.\n");
        }

    } while (userGuess != correctNumber);

    return 0;
}
