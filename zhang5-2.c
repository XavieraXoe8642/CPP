//T7
#include <stdio.h>
void three(double x)
{
    printf("%lf",x*x*x);
}

int main()
{
    double a;
    printf("请输入一个double类型的数:");
    scanf("%lf",&a);
    three(a);

    return 0;
}