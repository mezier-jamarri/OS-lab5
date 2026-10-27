#include <stdio.h>
#include <stdlib.h>

/* IMPLEMENT ME: Declare your functions here */
int add(int a, int b) { 
    printf("Adding 'a' and 'b'\n"); 
    return a + b; 
}

int subtract(int a, int b) { 
    printf("Subtracting 'b' from 'a'\n"); 
    return a - b; 
}

int multiply(int a, int b) { 
    printf("Multiplying 'a' and 'b'\n"); 
    return a * b; 
}

int divide(int a, int b) { 
    printf("Dividing 'a' by 'b'\n"); 
    return a / b; 
}

int exit_program(int a, int b) { 
    exit(0); 
    return 0; // Required to match the function signature, even though exit() stops execution
}

int main() {
    // Pre-defined integers based on the lab example output
    int a = 6;
    int b = 3;

    // 2. Create the array of function pointers
    // The order here matches the input mapping (0: add, 1: subtract, etc.)
    int (*operations[5])(int, int) = {add, subtract, multiply, divide, exit_program};

    printf("Operand 'a' : %d | Operand 'b' : %d\n", a, b);
    printf("Specify the operation to perform (0 : add | 1 : subtract | 2 : Multiply | 3 : divide | 4 : exit): ");

    // Read the user's character input
    char input;
    scanf(" %c", &input);

    // 3. Convert character to integer index (e.g., ASCII '0' becomes integer 0)
    int index = input - '0';

    // 4. Call the selected function from the array using the index! No conditionals needed.
    int result = operations[index](a, b);

    // Print the final calculated value
    printf("x = %d\n", result);

    return 0;
}