#include <iostream>

using namespace std;

int main() {
    int number, sum = 0;

    do {
        cout << "Enter a non-negative integer: ";
        cin >> number;
    } while (number < 0);

    int temp = number;

    do {
        sum += temp % 10;
        temp /= 10;
    } while (temp > 0);

    cout << "Sum of digits of " << number << " is: " << sum << endl;

    return 0;
}
