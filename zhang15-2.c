//T3
#include <stdio.h>

int count_bits(int n)
{
    int cnt=0;
    while(n!=0)
    {
        cnt+=n&1;
        n>>=1;
    }
    return cnt;
}

int main()
{
    int x;
    printf("请输入整数：");
    scanf("%d",&x);
    printf("打开位数量：%d\n",count_bits(x));
    return 0;
}