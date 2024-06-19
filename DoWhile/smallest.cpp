#include <iostream>

using namespace std;

int main() {
    int number, smallestDigit = 9;

    do {
        cout << "Enter a non-negative integer: ";
        cin >> number;
    } while (number < 0);

    int temp = number;

    do {
        int lastDigit = temp % 10;
        if (lastDigit < smallestDigit) {
            smallestDigit = lastDigit;
        }
        temp /= 10;
    } while (temp > 0);

    cout << "The smallest digit in " << number << " is: " << smallestDigit << endl;

    return 0;
}
