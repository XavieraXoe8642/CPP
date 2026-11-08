//T7
#include<stdio.h>
#include<float.h>
int main()
{
    double a=1.0/3.0;
    float b=1.0/3.0;
    printf("a=%.6lf\n",a);
    printf("a=%.12lf\n",a);
    printf("a=%.16lf\n",a);
    printf("\nb=%.6f\n",b);
    printf("b=%.12f\n",b);
    printf("b=%.16f\n",b);

    printf("\nFLT_DIG=%d\n",FLT_DIG);  
    //FLT_DIG：float 可靠十进制有效位数 → 值为 6
    printf("DBL_DIG=%d\n",DBL_DIG);  
    //DBL_DIG：double 可靠十进制有效位数 → 值为 15

    return 0;
}