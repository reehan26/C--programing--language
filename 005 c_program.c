#include <stdio.h>

//main program
int main()
{
    //variable to store values
    float basic, da, hra, gross_salary;
    float pf;
    float net_salary;

    //input required fields
    printf("Enter Basic Salary : ");
    scanf("%f",&basic);

    //calculate DA 10% of Basic Salary
    da = (basic*10)/100;
    //calculate PF 5% of Basic salary
    pf = (basic*5)/100;
    //calculate HRA 20% of Basic salary
    hra = (basic*20)/100;

	//calculate gross salary
  	gross_salary = basic + hra + da;
    //calculate net salary
    net_salary = gross_salary - pf;

        //printing gross salary
    printf("gross salary is: RUPEES %.02f\n",gross_salary);

    //printing Net salary
    printf("Net Salary is: RUPEES %.02f\n",net_salary);

    return 0;
}
