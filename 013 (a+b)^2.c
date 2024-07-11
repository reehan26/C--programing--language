#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,answer;

    printf("\nEnter a A\t:");
    scanf("%d",&a);

    printf("\nEnter a B \t:");
    fflush(stdin);
    scanf("%d",&b);

    answer=(a+b)*(a+b);

    printf("\n\t%d is the answer",answer);
    printf("\n");

    getch();
}
