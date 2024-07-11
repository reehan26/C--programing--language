#include<stdio.h>
int main()
{
    float rupees,paise;

    printf("Enter number of RUPEES :");
    scanf("%f",&rupees);

    paise=rupees=100;
    printf("The rupees in paise are :%0.2f",paise);
    printf("\n");
    getch();
    return 0;
}
