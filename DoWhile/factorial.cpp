#include <iostream>

using namespace std;

int main() {
    int number, factorial = 1;

    do {
        cout << "Enter a non-negative integer: ";
        cin >> number;
    } while (number < 0);

    int temp = number;

    do {
        factorial *= temp;
        temp--;
    } while (temp > 0);

    cout << "Factorial of " << number << " is: " << factorial << endl;

    return 0;
}
