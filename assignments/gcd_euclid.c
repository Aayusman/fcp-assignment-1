#include <stdio.h>

// Function to compute GCD using Euclid's algorithm
int gcd(int a, int b) 

{
    while (b != 0) 
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() 

{
    int a, b;

    // Input two positive integers
    printf("Enter two positive integers: ");
    scanf("%d %d", &a, &b);

    // Ensure that inputs are positive
    if (a <= 0 || b <= 0) {
        printf("Please enter positive integers only.\n");
        return 1;
    }

    // Call gcd function and display result
    int result = gcd(a, b);
    printf("GCD of %d and %d is %d\n", a, b, result);

    return 0;
}
