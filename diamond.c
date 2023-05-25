#include <stdio.h>

int main() {
    int n;
    char character;

    printf("Enter a positive odd integer: ");
    scanf("%d", &n);

    if (n <= 0 || n % 2 == 0) {
        printf("Invalid input. Please enter a positive odd integer.\n");
        return 0;
    }

    printf("Enter the character for the diamond: ");
    scanf(" %c", &character);

    int spaces = n / 2;
    int stars = 1;
    int i, j;

    for (i = 0; i < n; i++) {
        for (j = 0; j < spaces; j++) {
            printf(" ");
        }

        for (j = 0; j < stars; j++) {
            printf("%c", character);
        }

        printf("\n");

        if (i < n / 2) {
            spaces--;
            stars += 2;
        } else {
            spaces++;
            stars -= 2;
        }
    }

    return 0;
}
