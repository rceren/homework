#include <stdio.h>

int main() {
    char letter1, letter2, letter3;
    char temp;

    // Input three letters
    printf("Enter the first letter: ");
    scanf(" %c", &letter1);

    printf("Enter the second letter: ");
    scanf(" %c", &letter2);

    printf("Enter the third letter: ");
    scanf(" %c", &letter3);

    // Ask for the order of sequence
    printf("Enter the order of sequence (a for alphabetical, d for reverse alphabetical): ");
    char order;
    scanf(" %c", &order);

    // Sort the letters based on the user's choice
    if (order == 'a') {
        if (letter1 > letter2) {
            temp = letter1;
            letter1 = letter2;
            letter2 = temp;
        }
        if (letter2 > letter3) {
            temp = letter2;
            letter2 = letter3;
            letter3 = temp;
        }
        if (letter1 > letter2) {
            temp = letter1;
            letter1 = letter2;
            letter2 = temp;
        }
    } else if (order == 'd') {
        if (letter1 < letter2) {
            temp = letter1;
            letter1 = letter2;
            letter2 = temp;
        }
        if (letter2 < letter3) {
            temp = letter2;
            letter2 = letter3;
            letter3 = temp;
        }
        if (letter1 < letter2) {
            temp = letter1;
            letter1 = letter2;
            letter2 = temp;
        }
    } else {
        printf("Invalid order specified. Please enter 'a' for alphabetical or 'd' for reverse alphabetical.\n");
        return 1; // Exit with an error code
    }

    // Output the sorted sequence
    printf("Sorted sequence: %c, %c, %c\n", letter1, letter2, letter3);

    return 0;
}
