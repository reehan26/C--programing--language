#include<stdio.h>
int main()
{
    float distance_in_KM,distance_in_M;

    printf("Enter the distance between the two cities in kilometer:");
    scanf("%f",&distance_in_KM);

    distance_in_M=distance_in_KM * 1000;

    printf("distance in meter = %0.2f",distance_in_M);

    printf("\n");
}
