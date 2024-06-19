#include <iostream>

using namespace std;

int main() {
    int countdown = 10;

    do {
        cout << countdown << " ";
        countdown--;
    } while (countdown >= 1);

    cout << endl;

    return 0;
}
