#include <stdio.h>

int main() {
    int size;

    do {
        printf("Enter the size of the square: ");
        scanf("%d", &size);
    } while (size <= 0);

    int i = 1;
    do {
        int j = 1;
        do {
            if (i == 1 || i == size || j == 1 || j == size) {
                printf("* ");
            } else {
                printf("  ");
            }
            j++;
        } while (j <= size);
        printf("\n");
        i++;
    } while (i <= size);

    return 0;
}
