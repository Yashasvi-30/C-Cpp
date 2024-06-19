#include <iostream>

using namespace std;

int main() {
    int number;

    do {
        cout << "Enter a positive integer (enter a negative integer to exit): ";
        cin >> number;

        if (number >= 0) {
            cout << "You entered: " << number << endl;
        }
    } while (number >= 0);

    return 0;
}
