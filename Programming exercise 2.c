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
    //Print table header
    printf("\nFahrenheit\tCelcius\n")
    //Convert Farenheit to celcius and print the table
    for(fahrenheit = start; fahrenheit <= end; fahrenheit += increment){
            celsius = (fahrenheit - 32) * 5 / 9;
            printf("&6.2f \t\t%6.2f\n",
    fahrenheit, celsius);
    }
    return 0;
}
