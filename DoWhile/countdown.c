#include <stdio.h>

int main() {
    int countdown = 10;

    do {
        printf("%d ", countdown);
        countdown--;
    } while (countdown >= 1);

    printf("\n");

    return 0;
}
