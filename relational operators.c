#include<stdio.h>
main()
{
    int a, b;
    a=2; b=4;
    if (a>b)
    {
        printf("%d is grater than %d\n", a, b);
    }
    if(a<b)
    {
        printf("%d is less than %d\n", a, b);
    }
    if(a==b)
    {
        printf("%d is equal to %d\n", a, b);
    }
    if(a!=b)
    {
        printf("%d is not equal to %d\n", a, b);
    }
    if(a<=b)
    {
        printf("%d is less than or equal to %d\n", a, b);
    }
    if(a>=b)
    {
        printf("%d is greater than or equal to %d", a, b);
    }
}
