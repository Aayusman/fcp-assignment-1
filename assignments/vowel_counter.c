#include <stdio.h>
#include <ctype.h>

int main() 

{
    char ch;
    int vowelCount = 0, totalCount = 0;
    
    printf("Enter a string: ");
    
    while ((ch = getchar()) != '\n') 
    {
        ch = tolower(ch);  // Convert to lowercase for case-insensitive comparison
        if (isalpha(ch)) 
        {
            totalCount++;
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') 
            {
                vowelCount++;
            }
        }
    }

    if (totalCount > 0) 
    {
        float percentage = ((float)vowelCount / totalCount) * 100;
        printf("Percentage of vowels: %.2f%%\n", percentage);
    } 
    else 
    {
        printf("No alphabetic characters entered.\n");
    }

    return 0;
}
