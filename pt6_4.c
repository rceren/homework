#include <stdio.h>

// Function with arguments and with return
int functionWithArgsWithReturn(int x, int y) {
    printf("Executing function with arguments and with return. Arguments: %d, %d\n", x, y);
    // Function body goes here
    return x + y; // Return the sum of arguments
}

int main() {
    int a = 5, b = 10;
    int result = functionWithArgsWithReturn(a, b);
    printf("Returned value: %d\n", result);
    return 0;
}
