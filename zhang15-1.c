//T1
#include <stdio.h>

int zhuanhuan(const char *p)
{
    int num=0;
    while(*p!='\0')
    {
        num=num*2+(*p-'0');
        p++;
    }
    return num;
}

int main()
{
    char pbin[100];
    printf("请输入二进制字符串：");
    scanf("%s",pbin);
    printf("转化为int类型的值为%d\n",zhuanhuan(pbin));
    return 0;
}