#include<stdio.h>
main()
{
    int eng,san,m,p,c;
    float total,average;

    eng=san=m=p=c=total=average=0;

    printf("enter marks for english:");
    scanf("%d",&eng);

    printf("enter marks for sanskrit:");
    scanf("%d",&san);

    printf("enter marks for maths:");
    scanf("%d",&m);

    printf("enter marks for physics:");
    scanf("%d",&p);

    printf("enter marks for chemistry:");
    scanf("%d",&c);

    total=eng+san+m+p+c;

    average=total/5;

    printf("Total is:%.0f",total);
    printf("\nAverage is:%.2f%%",average);

    printf("\n");




}

