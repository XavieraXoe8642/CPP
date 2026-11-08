//T4
#include<stdio.h>
int main()
{
    double n;
    printf("Enter a floating-point value:");
    scanf("%lf",&n);
    printf("fixed-point notation:%lf\n",n);
    printf("exponential notation:%le\n",n);
    printf("p notation:%a\n",n);
    return 0;
}