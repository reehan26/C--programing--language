#include<stdio.h>
int main()
{
    float radius,area,pi;

    printf("Enter the radius of the circle :");
    scanf("%f",&radius);

    pi=3.14;
    area=pi* radius* radius;

    printf("The areas of the circle is.....:%0.2f",area);
    printf("\n");
    getch();
    return 0;

}
