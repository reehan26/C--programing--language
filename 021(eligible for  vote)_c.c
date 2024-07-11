#include<stdio.h>
int  main()
{

    int age;
    printf("Enter your age :");
    scanf("%d",&age);

    if (age<18)
    {
        printf("\nSorry, you are not eligiable to cast your vote.\n");
        printf("You would be able to cast your vote after %d years./n",18-age);

    }
    else
    {
        printf("Congratulation you are eligible for casting your vote.\n");

    }
    getch();

    return ;
}

