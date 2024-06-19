#include <iostream>

using namespace std;

int main() {
    int size;

    do {
        cout << "Enter the size of the square: ";
        cin >> size;
    } while (size <= 0);

    int i = 1;
    do {
        int j = 1;
        do {
            if (i == 1 || i == size || j == 1 || j == size) {
                cout << "* ";
            } else {
                cout << "  ";
            }
            j++;
        } while (j <= size);
        cout << endl;
        i++;
    } while (i <= size);

    return 0;
}
