//T5
#include<stdio.h>
int main()
{
    char x;
    printf("请输入一个大写字母:");
    scanf("%c",&x);
    int m=x-64;
    int i,j;
    for(j=1;j<=m;j++)
    {
        for(i=1;i<=m-j;i++)
        {
            printf(" ");
        }
        for(i=1;i<=j;i++)
        {
            printf("%c",i+64);
        }
        for(i=j-1;i>=1;i--)
        {
            printf("%c",i+64);
        }
        printf("\n");
    }
    
    return 0;
}