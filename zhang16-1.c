//T2
#include <stdio.h>
#define average(a,b) (2.0*(a)*(b)/((a)+(b)))

int main(void)
{
    double x,y;
    printf("输入两个数字：");
    scanf("%lf%lf",&x,&y);
    printf("调和平均数=%.2f\n",average(x,y));
    return 0;
}