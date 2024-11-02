#include <stdio.h>

// Using double Character type for extra Decimal places
double calculate_sum(int n) 

{
    double total_sum = 0.0;
    for (int i = 1; i <= n; i++) 
    {
        total_sum += 1.0 / i;
    }
    return total_sum;
}

int main() 

{
    int n;
    printf("Enter the number of terms (n): ");
    scanf("%d", &n);

    double result = calculate_sum(n);
    printf("The sum of the series 1/i from 1 to %d terms is: %lf\n", n, result);

    return 0;
}
