#include <stdio.h>

int isPrime(int num) {
    if (num < 2) {
        return 0; // Not prime
    }
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            return 0; // Not prime
        }
    }
    return 1; // Prime
}

int main() {
    int limit, sum = 0, counter = 1;

    do {
        printf("Enter a positive integer limit: ");
        scanf("%d", &limit);
    } while (limit <= 0);

    do {
        if (isPrime(counter)) {
            sum += counter;
        }
        counter++;
    } while (counter <= limit);

    printf("Sum of prime numbers up to %d: %d\n", limit, sum);

    return 0;
}
