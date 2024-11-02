#include <stdio.h>

int main() 

{
    int number, sum = 0;

    // Ask for a four-digit number
    printf("Please enter a four-digit number: ");
    scanf("%d", &number);

    // Ensure the input is a four-digit number
    if (number < 1000 || number > 9999) 
    {
        printf("Error: Please enter a valid four-digit number.\n");
        return 1; // Exit with an error code
    }

    // Calculate the sum of the digits
    while (number > 0) 
    {
        sum += number % 10; // Add the last digit to the sum
        number /= 10;        // Remove the last digit
    }

    // Output the sum of the digits
    printf("The sum of the digits is: %d\n", sum);

    return 0; // Exit the program successfully
}
