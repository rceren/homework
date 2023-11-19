#include <stdio.h>

// Function to calculate the factorial using a while loop
long long calculateFactorial(int num, char dataType) {
    // Initialize the factorial variable based on the selected data type
    char charFactorial = 1;
    int intFactorial = 1;
    long long longLongFactorial = 1;

    // Choose the appropriate data type for the calculation
    void *factorialPtr;
    switch (dataType) {
        case 'c':
            factorialPtr = &charFactorial;
            break;
        case 'i':
            factorialPtr = &intFactorial;
            break;
        case 'l':
            factorialPtr = &longLongFactorial;
            break;
        default:
            printf("Invalid data type selection.\n");
            return -1;
    }

    // Calculate the factorial using a while loop
    while (num > 0) {
        // Check for overflow before updating the factorial
        if (__builtin_mul_overflow(*((long long *)factorialPtr), num, (long long *)factorialPtr)) {
            printf("Error: Factorial calculation overflowed the selected data type.\n");
            return -1;
        }
        num--;
    }

    return *((long long *)factorialPtr);
}

int main() {
    // Get input from the user
    int num;
    char dataType;

    printf("Enter a decimal number: ");
    scanf("%d", &num);

    printf("Choose data type for calculation (c for char, i for int, l for long long): ");
    scanf(" %c", &dataType);

    // Perform the factorial calculation and display the result
    long long result = calculateFactorial(num, dataType);

    if (result != -1) {
        printf("Factorial of %d with data type %c: %lld\n", num, dataType, result);
    }

    return 0;
}
