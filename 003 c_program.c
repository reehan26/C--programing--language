#include <stdio.h>
int main(){
   int bill_amt , paid_amt , balance ;

   printf("Enter total bill amount is : ");
   scanf("%d",&bill_amt);

   printf("Enter total paid amount is : ");
   scanf("%d",&paid_amt);

balance = paid_amt - bill_amt;

printf("balance amount to be returned is :%d",balance);

printf("\n");
}
