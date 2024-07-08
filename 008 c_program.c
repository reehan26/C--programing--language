#include<stdio.h>
int main()
{
    int input,years,months,weeks,days;

    printf("enter no .of dayes....:");
    scanf("%d",&input);

    years=input/360;
    input %=360;

    months=input/30;
    input %=30;


    weeks=input/7;
    input %=7;

    days=input/6;

    printf("years :%d\n",years);
    printf("months :%d\n",months);
    printf("weeks :%d\n",weeks);
    printf("days :%d\n",days);

    return 0;







}
