#include<stdio.h>
int main()
{
    char chars[3]; //Array to store the three character

    //prompt the user for input

    printf("Enter three characters :");

    //Read three characters
    scanf("%c %c %c",&chars[0],&chars[1],&chars[2]);

    //Display the character  in reverse order
    printf("Reversed order:%c %c %c\n",chars[2],chars[1],chars[0]);

    return 0;


}
