#include <stdio.h>
#include <string.h>

int main() {
    char word[100];
    int length = 0, isPalindrome = 1;

    do {
        printf("Enter a word: ");
        scanf("%s", word);
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
        printf("%s is a palindrome.\n", word);
    } else {
        printf("%s is not a palindrome.\n", word);
    }

    return 0;
}
