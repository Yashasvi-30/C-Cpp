#include <stdio.h>

int main() {
    double number, sum = 0, count = 0;

    do {
        printf("Enter a number (enter a negative number to finish): ");
        scanf("%lf", &number);

        if (number >= 0) {
            sum += number;
            count++;
        }
    } while (number >= 0);

    if (count > 0) {
        double average = sum / count;
        printf("Average of the entered numbers: %.2lf\n", average);
    } else {
        printf("No valid numbers entered.\n");
    }

    return 0;
}
