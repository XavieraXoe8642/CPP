//T7
#include<stdio.h>
#define s1 0.15
#define s2 0.2
#define s3 0.25

int main()
{
    float h,T,s,m;
    printf("请输入一周工作的小时:");   
    scanf("%f",&h);
    
    if (h>40.0)
        T=(h-40.0)*1.5+40.0;
    else
        T=h;
    m=10.0*T;
    
    if(m<=300)
       s=m*s1; 
    else if(m>300 && m<=450)
        s=300*s1+(m-300)*s2;
    else 
        s=300*s1+150*s2+(m-450)*s3;
  
    printf("工资总额=%f\n税金=%f\n净收入=%f\n",m,s,m-s);

    return 0;
}