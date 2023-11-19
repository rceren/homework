#include <stdio.h>

// Function with arguments and without return
void functionWithArgsAndReturn(int x, int y) {
    printf("Executing function with arguments and without return. Arguments: %d, %d\n", x, y);
    // Function body goes here
}

int main() {
    int a = 5, b = 10;
    functionWithArgsAndReturn(a, b);
    return 0;
}
