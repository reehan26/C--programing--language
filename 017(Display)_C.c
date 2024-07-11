#include<stdio.h>
int main()
{
    char name[50];
    char Area[50];
    char city[50];

    printf("Enter your COMPANY Name :");
    scanf("%s",&name);

    printf("Enter your Area Name : ");
    fflush(stdin);
    scanf("%s",&Area);

    printf("Enter your City :");
    scanf("%s",&city);

    printf("\t\t\t5s\n",name);
    printf("\t\t\t%s\n",Area);
    printf("\t\t\t%s\n",city);
    printf("\n");
    getch();

    return 0;
}
