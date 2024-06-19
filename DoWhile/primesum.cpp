#include <iostream>

using namespace std;

bool isPrime(int num) {
    if (num < 2) {
        return false; // Not prime
    }
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            return false; // Not prime
        }
    }
    return true; // Prime
}

int main() {
    int limit, sum = 0, counter = 1;

    do {
        cout << "Enter a positive integer limit: ";
        cin >> limit;
    } while (limit <= 0);

    do {
        if (isPrime(counter)) {
            sum += counter;
        }
        counter++;
    } while (counter <= limit);

    cout << "Sum of prime numbers up to " << limit << ": " << sum << endl;

    return 0;
}
