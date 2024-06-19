#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0)); // Seed for random number generation
    int correctNumber = rand() % 10 + 1; // Random number between 1 and 10
    int userGuess;

    do {
        cout << "Guess the number (between 1 and 10): ";
        cin >> userGuess;

        if (userGuess > correctNumber) {
            cout << "Too high! Try again." << endl;
        } else if (userGuess < correctNumber) {
            cout << "Too low! Try again." << endl;
        } else {
            cout << "Congratulations! You guessed the correct number." << endl;
        }

    } while (userGuess != correctNumber);

    return 0;
}
