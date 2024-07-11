#include<stdio.h>
int main()
{
    int gross_salary,net_salary,basic_salary,allowances,deduction;

    printf("Enter Basic salary :");
    scanf("%d",&basic_salary);

    printf("Enter Allowance:");
    scanf("%d",&allowances);

    printf("Enter Deduction:");
    scanf("%d",&deduction);

    gross_salary=basic_salary+allowances;
    net_salary=gross_salary-deduction;

    printf("\nGross salary is:%d",gross_salary);
    printf("\nNet salary is:%d",net_salary);

    printf("\n");
    getch();

}
