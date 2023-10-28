#include <stdio.h>

int main() {
    unsigned char num;

    printf("Enter a natural number: ");
    scanf("%hhu", &num);

    printf("Binary representation of %u is: ", num);
    for (int i = 7; i >= 0; i--) {
        // Use bitwise shift and masking to extract each bit
        unsigned char bit = (num >> i) & 1;
        printf("%u", bit);
    }
    printf("\n");

    return 0;
}

