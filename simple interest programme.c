#include<stdio.h>
main()
{
    int prin, time;
    float rate;
    float si;
    printf("Enter the values of principle, duration and rate of interest:");
    scanf("%d%d%f", &prin, &time, &rate);
    si=prin*time*rate/100;
    printf("simple interest is:%f",si);
}
