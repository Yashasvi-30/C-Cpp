#include <stdio.h>

int main() {
    int number, factorial = 1;

    do {
        printf("Enter a non-negative integer: ");
        scanf("%d", &number);
    } while (number < 0);

    int temp = number;

    do {
        factorial *= temp;
        temp--;
    } while (temp > 0);

    printf("Factorial of %d is: %d\n", number, factorial);

    return 0;
}
