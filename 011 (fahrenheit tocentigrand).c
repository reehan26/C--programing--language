#include<stdio.h>
int main()
{
    float fahrenheit,celsius;
    printf("Enter Temperature value(in fahrenheit):");
    scanf("%f",&fahrenheit);
    celsius=(fahrenheit-32)/1.8;
    printf("\nEqivalent Temperature(in celsius)=%0.2f",celsius);

    printf("\n");

    return 0;
}
