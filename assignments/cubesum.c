#include <stdio.h>

int sum_of_cubes(int number) 

{
    int sum = 0;
    while (number != 0) 
    {
        int digit = number % 10;  // Get the last digit
        sum += digit * digit * digit;  // Add the cube of the digit to sum
        number /= 10;  // Remove the last digit
    }
    return sum;
}

int main() 

{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    // Handle negative numbers by taking the absolute value
    if (num < 0) 
    {
        num = -num;
    }

    int result = sum_of_cubes(num);
    printf("The sum of the cubes of the digits of %d is: %d\n", num, result);
    return 0;
}
