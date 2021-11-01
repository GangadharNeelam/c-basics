#include<stdio.h>
main()
{
    int a;
    printf("Enter a positive value which is perfectly divisible by 5:");
    scanf("%d", &a);
    if((a>0)&&(a%5==0))
    {
        printf("Something");
    }
    else
    {
        printf("Anything");
    }
}
