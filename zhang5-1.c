//T4
#include <stdio.h>
int main()
{
    float a;
    while(1)
    {
        printf("Enter a height in centimeters:");
        scanf("%f",&a);
        int x=a/(2.54f*12);
        //1英寸 = 2.54cm
        //1英尺 = 12英寸
        if(a<=0)
        {
            printf("bye");
            //如果break写前面，会直接跳出
            break;
        }
        else
            printf("%.1f cm = %d feet, %.1f inches\n",a,x,a/2.54f-x*12);
    }

return 0;
}