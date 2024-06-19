#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char word[100];
    int length = 0, isPalindrome = 1;

    do {
        cout << "Enter a word: ";
        cin >> word;
        length = strlen(word);
    } while (length <= 0);

    int start = 0, end = length - 1;

    do {
        if (word[start] != word[end]) {
            isPalindrome = 0;
            break;
        }
        start++;
        end--;
    } while (start < end);

    if (isPalindrome) {
        cout << word << " is a palindrome." << endl;
    } else {
        cout << word << " is not a palindrome." << endl;
    }

    return 0;
}
