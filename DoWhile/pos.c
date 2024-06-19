#include <stdio.h>

int main() {
    int number;

    do {
        printf("Enter a positive integer (enter a negative integer to exit): ");
        scanf("%d", &number);

        if (number >= 0) {
            printf("You entered: %d\n", number);
        }
    } while (number >= 0);

    return 0;
}
