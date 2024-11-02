#include <stdio.h>

int isPrime(int number) 

{
    // Check for numbers less than 2
    if (number < 2) 
    {
        return 0; // Not prime
    }
    // Check for factors from 2 to the square root of the number
    for (int i = 2; i * i <= number; i++) 
    {
        if (number % i == 0) 
        {
            return 0; // Not prime
        }
    }
    return 1; // Prime
}

int main() 

{
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    
    if (isPrime(num)) 
    {
        printf("%d is a prime number.\n", num);
    } else 
    {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}
