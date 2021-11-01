#include<stdio.h>
main()
{
    float miles;
    printf("Input the distance in miles:");
    scanf("%f", &miles);
    printf("Value in kilometers is %f", miles*1.6);
    printf("\nvalue in feets is %f", miles*5890);
    printf("\nvalue in inches is %f", miles*5890*12);
}
