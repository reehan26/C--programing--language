#include<stdio.h>
int main()
{
    int a,b,temp;
    a=b=temp=0,

    printf("enter value for A:");
    scanf("%d",&a);

    printf("enter value for B:");
    scanf("%d",&b);

    a=a*b;
    b=a/b;
    a=a/b;

    printf("\nA is:%d",a);
    printf("\nB is:%d",b);

    printf("\n");



}


