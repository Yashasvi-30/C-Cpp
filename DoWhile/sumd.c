#include <stdio.h>

int main() {
    int number, sum = 0;

    do {
        printf("Enter a non-negative integer: ");
        scanf("%d", &number);
    } while (number < 0);

    int temp = number;

    do {
        sum += temp % 10;
        temp /= 10;
    } while (temp > 0);

    printf("Sum of digits of %d is: %d\n", number, sum);

    return 0;
}
