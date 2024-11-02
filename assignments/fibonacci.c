#include <stdio.h>

int main() 

{
    int n, first = 0, second = 1, next;

    // Ask the user for the nth term
    printf("Enter the term number (n) for Fibonacci series: ");
    scanf("%d", &n);

    // Check if the input is a valid natural number
    if (n <= 0) 
    {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    // Special case for n = 1
    if (n == 1) 
    {
        printf("The %dth Fibonacci term is: %d\n", n, first);
        return 0;
    }

    // Calculate the nth Fibonacci term
    for (int i = 2; i <= n; i++) 
    {
        next = first + second;
        first = second;
        second = next;
    }

    printf("The %dth Fibonacci term is: %d\n", n, first);

    return 0;
}
