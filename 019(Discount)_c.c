#include<stdio.h>
int main()
{
    float TotalBill,Tippercent;
    int Friend;
    printf("Enter Total Bill Amount :");
    scanf("%f",&TotalBill);
    fflush(stdin);

    printf("Enter The Tip percentage  :");
    scanf("f",&Tippercent);
    fflush(stdin);

    printf("Enter The No. of friend :");
    scanf("%d",&Friend);
    fflush(stdin);

    TotalBill=TotalBill+( TotalBill*Tippercent/100);
    int AmtPerFriend=TotalBill/Friend;

    printf("Each One Have To Pay Rs:%d\n",AmtPerFriend);
    return 0;





}
