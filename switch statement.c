#include<stdio.h>
main()
{
    float a, b;
    a=20;
    b=10;
    char choice;
    printf("Enter an operator:");
    scanf("%c", &choice);
    switch(choice)
    {
        case '+':
        printf("value is :%f", a+b);
        break;
        case '-':
        printf("value is :%f", a-b);
        break;
        case '/':
        printf("value is :%f", a/b);
        break;
        case '*':
        printf("value is :%f", a*b);
        default:
        printf("Invalid input");
    }
}
