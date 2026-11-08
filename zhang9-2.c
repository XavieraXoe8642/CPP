//T7
#include<stdio.h>

int zimu(char ch)
{
    if(ch>=65&&ch<=90)
    {
        printf("%c是字母\n",ch);
        return ch-64;
    }
    else if(ch>=97&&ch<=122)
    {
        printf("%c是字母\n",ch);
        return ch-96;
    }
    else
    {
        printf("%c不是字母\n",ch);
        return -1;
    }
    
}   
    

int main()
{
    char ch;
    while(scanf("%c",&ch)!=EOF)  //为什么按完回车键会将其读入？
    {
        int a=zimu(ch);
        printf("数值位置为%d\n",a);
    }
    
    return 0;
}