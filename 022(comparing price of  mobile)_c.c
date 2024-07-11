#include<stdio.h>
int main()
{
    int samsung_phone, vivo_phone;

    printf("Enter your samsung mobile price:");
    scanf("%d",&samsung_phone);

    printf("Enter your vivo mobile price:");
    scanf("%d",&vivo_phone);

    if(samsung_phone>vivo_phone)

    printf("samsung mobile is costlier then vivo mobile");

    else if(samsung_phone<vivo_phone)

        printf("vivo mobile is costlier then samsung mobile");
    else
        printf("Both are in same price");
        printf("\n");

    return 0;

}
