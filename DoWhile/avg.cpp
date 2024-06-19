#include <iostream>

using namespace std;

int main() {
    double number, sum = 0, count = 0;

    do {
        cout << "Enter a number (enter a negative number to finish): ";
        cin >> number;

        if (number >= 0) {
            sum += number;
            count++;
        }
    } while (number >= 0);

    if (count > 0) {
        double average = sum / count;
        cout << "Average of the entered numbers: " << fixed  << average << endl;
    } else {
        cout << "No valid numbers entered." << endl;
    }

    return 0;
}

