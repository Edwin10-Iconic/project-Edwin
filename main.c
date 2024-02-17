#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    printf("A table showing the conversion of pounds to kilograms\n");
    float a;
    while(a <= 100)
    {
        printf("%6.2f pounds = %6.2f kilograms\n",
        a,a*0.453592);
        a = a + 10;
    }
    return 0;
}
