#include <stdio.h>

int main() {
    int number, smallestDigit = 9;

    do {
        printf("Enter a non-negative integer: ");
        scanf("%d", &number);
    } while (number < 0);

    int temp = number;

    do {
        int lastDigit = temp % 10;
        if (lastDigit < smallestDigit) {
            smallestDigit = lastDigit;
        }
        temp /= 10;
    } while (temp > 0);

    printf("The smallest digit in %d is: %d\n", number, smallestDigit);

    return 0;
}
