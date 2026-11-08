//T4
#include <stdio.h>

int check_bit(int x,int y)
{
    return (x>>y)&1;
}

int main()
{
    int num,position;
    printf("输入数字和位位置：");
    scanf("%d%d",&num,&position);
    printf("%d\n", check_bit(num,position));
    return 0;
}