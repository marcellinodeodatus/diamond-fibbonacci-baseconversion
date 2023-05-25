#include <stdio.h>
#include <math.h>

int main() {
    int base;
    printf("Enter the base to convert to (between 2 and 9): ");
    scanf("%d", &base);

    if (base < 2 || base > 9) {
        printf("Invalid base. Please enter a positive integer between 2 and 9.\n");
        return 0;
    }

    int decimal;
    printf("Enter the decimal number to convert: ");
    scanf("%d", &decimal);

    int converted = 0;
    int power = 0;

    while (decimal > 0) {
        int digit = decimal % base;
        decimal /= base;
        converted += digit * pow(10, power);
        power++;
    }

    printf("The converted number is: %d\n", converted);

    return 0;
}
