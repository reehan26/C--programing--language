#include<stdio.h>
int main()
{
    char upper_case,lower_case;
    int ascii;
    printf("Enter any upper case alphabet from AtoZ:");
    scanf("%c",&upper_case);

    ascii=upper_case;
    lower_case=ascii+32;

    printf("its LOWER CASE IS:%c",lower_case);
    printf("\n");

    return 0;
}
