//T8
#include<stdio.h>
#include<stdlib.h>

double power(double x,int y)
{
    
    double pow;
    int i;
    if(x==0)
    {
        if(y==0)
        {
            printf("0的0次幂未定义，把该值处理为1\n");
            pow=1;
        }
        else
            pow=0;
        return pow;
    }

    if(y==0)
    {
        if(x==0)
            printf("0的0次幂未定义，把该值处理为1\n");
        pow=1;
        return pow;
    }

    for(i=1;i<=abs(y);i++)
    {
        pow *= x;
    }

    if(y<0)
        return 1/pow;
    else
        return pow;

}
    

int main()
{
    double m,xpow;
    int exp;

    printf("Enter a number and the positive integer power:");
    printf(" to which\nthe number will be raised.Enter q");
    printf(" to quit.\n");

    while(scanf("%lf%d",&m,&exp)==2)  
    {
        xpow = power(m,exp);
        printf("%.3g to the power %d is %.5g\n",m,exp,xpow);
        printf("Enter next pairof numbers or q to quit.\n");
    }
    printf("Hope you enjoyed this power trip--bye!\n");
    
    return 0;
}