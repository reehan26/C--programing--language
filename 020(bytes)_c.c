#include <stdio.h>
#include <stdlib.h>

int main() {
    int rollNo;
    char name[50];
    char gender;
    float height;

    printf("Enter roll number: ");
    scanf("%d", &rollNo);

    printf("Enter name: ");
    fflush(stdin);
    scanf("%s", name);

    printf("Enter gender(M/F): ");
    fflush(stdin);
    scanf(" %c", &gender);

    printf("Enter height: ");
    scanf("%f", &height);

    printf("\nSize of roll number variable: %lu bytes\n", sizeof(rollNo));
    printf("Size of name variable: %lu bytes\n", sizeof(name));
    printf("Size of gender variable: %lu bytes\n", sizeof(gender));
    printf("Size of height variable: %lu bytes\n", sizeof(height));

    return 0;
}
