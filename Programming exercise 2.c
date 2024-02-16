#include <stdio.h>
#include <stdlib.h>

int main()
{
    float start, end, increment;
    printf("Enter the starting Fahrenheit value: ");
    scanf("%f" , &start);
    printf("Enter the ending Fahrenheit value: ");
    scanf("%f" , &end);
    printf("Enter the increment Fahrenheit value: ");
    scanf("%f" , &increment);
    printf("\nFahrenheit\celsius\n");
printf("-----------------------------------");
    float fahrenheit = start;
    while (fahrenheit <= end)
    {
        float celsius = (fahrenheit - 32) * 5/9;
        printf("%.2f\t\t%.2f\n" , fahrenheit, celsius);
        fahrenheit += increment;
    }
    return 0;
}
