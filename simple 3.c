#include<stdio.h>
main()
{
    int prin, time;
    float rate;
    float si;
    printf("Enter the value of principle, duration and rate of interest:");
    scanf("%d%d%f", &prin, &time, &rate);
    si=prin*time*rate/100;
    printf("the value of simple ineterest is:%f", si);
}
