#include<stdio.h>
main()
{
    int a, b, c;
    a=10;
    b=25;
    c=8;
    (a<b)?((a<c)?printf("a is lesser"):printf("c is lesser")):
        (b>c)?printf("b is lesser"):printf("c is lesser");
}
