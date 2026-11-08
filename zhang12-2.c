//T4
#include <stdio.h>

int diaoyong()
{
    static int x = 0; 
    //static局部变量，仅在第一次调用时初始化
    x++;
    return x;
}

int main()
{
    int i,n;
    printf("请输入调用的次数：");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("第%d次调用\n", diaoyong());
    }
    return 0;
}