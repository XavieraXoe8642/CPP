//T8
#include<stdio.h>
#define d1 8.75
#define d2 9.33
#define d3 10.00
#define d4 11.20
#define s1 0.15
#define s2 0.2
#define s3 0.25

void gongzi(int x)
{
    float h,T,s,m;
    float arr[4]={d1,d2,d3,d4};
    printf("请输入工作时间\n");
    scanf("%f",&h);
    if (h>40.0)
        T=(h-40.0)*1.5+40.0;
    else
        T=h;
        m=arr[x-1]*T;
    if(m<=300)
        s=m*s1; 
    else if(m>300 && m<=450)
        s=300*s1+(m-300)*s2;
    else 
        s=300*s1+150*s2+(m-450)*s3;
    printf("工资总额=%f\n税金=%f\n净收入=%f\n",m,s,m-s);
}

int main()
{
    start:
    printf("*****************************************************************\n"); 
    printf("Enter the number corresponding to the desired pay rate or action:\n"); 
    printf("1)$8.75/hr                          2)$9.33/hr\n");
    printf("3)$10.00/hr                         4)$11.20/hr\n");
    printf("5)quit\n");
    printf("*****************************************************************\n"); 
    
    while(1)
    {
        int n;
        scanf("%d",&n);
        switch(n)
        {
        case 1:case 2:case 3:case 4:
            gongzi(n);
            continue;
        case 5:
            goto end;
        default:
            printf("请输入正确选项\n");
            goto start;
        }
    }
    end:
    return 0;
}