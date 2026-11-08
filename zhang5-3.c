//T9
#include <stdio.h>
void Temperatures(double x)
{
    const double t=5.0/9.0*(x-32.0);
    printf("华氏温度=%.2lf\n",x);
    printf("摄氏温度=%.2lf\n",t);
    printf("开氏温度=%.2lf\n",t+273.16);
}

int main()
{
    double T;
    while(1)
    {
        printf("请输入一个华氏温度:");
        int a=scanf("%lf",&T);
        if(a==1)  
            Temperatures(T);
        else    
            break;
    }
return 0;
}