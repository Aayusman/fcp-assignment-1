#include <stdio.h>

double calculate_sum_sq(int n) 
{
    double total_sum = 0.0;
    for (int i = 1; i <= n; i++) 
    {
        total_sum += 1.0 / i*i;
    }
    return total_sum;
}

int main() 

{
    int n;
    printf("Enter the number of terms (n): ");
    scanf("%d", &n);

    double result = calculate_sum_sq(n);
    printf("The sum of the series 1/i from 1 to %d terms is: %lf\n", n, result);

    return 0;
}
