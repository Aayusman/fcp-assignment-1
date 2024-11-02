#include <stdio.h>

int sum_of_digits(int n) 

{
    int sum = 0;
    while (n > 0) 
    {
        sum += n % 10;  // Add the last digit to sum
        n /= 10;        // Remove the last digit
    }
    return sum;
}

int main() 
{
    int number;
    int iterations = 0;

    // Input a number from the user
    printf("Enter an integer: ");
    scanf("%d", &number);

    // Repeat until the number is a single digit
    while (number >= 10) 
    {
        number = sum_of_digits(number); // Update number to the sum of its digits
        iterations++;                   // Increment iteration count
    }

    // Output the result
    printf("Number of iterations to get a single digit: %d\n", iterations);
    return 0;
}
