//T8
#include<stdio.h>

void add(float x,float y)
{
    printf("%g + %g = %g\n",x,y,x+y);
    //%g:输出数字的小数点后无无用的0
}

void subtract(float x,float y)
{
    printf("%g - %g = %g\n",x,y,x-y);
}

void multiply(float x,float y)
{
    printf("%g * %g = %g\n",x,y,x*y);
}

void divide(float x,float y)
{
    if(y==0)
    printf("Enter a number other than 0:");
    scanf("%f",&y);
    printf("%g / %g = %g\n",x,y,x/y);
}

int main()
{
    while(1)
    {
        printf("Enter the operation of your choice:\n");
        printf("a. add           s. subtract\n");
        printf("m. multiply      d. divide\n");
        printf("q. quit\n");
        char ch;
        scanf(" %c",&ch);  
        //%c前有空格：自动吃掉缓存区所以空白（空格、回车、换行）
        //防止输入数值后按回车键时%c把回车键当作字符读取
        if(ch=='q')
        {
            printf("Bye");
            break;
        }    

        float x,y;
        printf("Enter first number:");
        int i=scanf("%f",&x);
        if(i!=1)
        {
            while(getchar()!='\n');
            //输入非数字的内容，不能正确读入，但会留在缓存区，此时直接输入数字，scanf读取的仍是之前的非数字内容
            //用getchar读取缓存区内容，读取成功后直接将该字符从队列中移除，此时缓存区无内容，可输入数字
            printf("Please enter a number,such as 2.5,-1.78E8, or 3 :");
            scanf("%f",&x);
        }

        printf("Enter second number:");
        int j=scanf("%f",&y);
        if(j!=1)
        {
            while(getchar()!='\n');
            printf("Please enter a number,such as 2.5,-1.78E8, or 3 :");
            scanf("%f",&y);
        }

        switch(ch)
        {
            case 'a':add(x,y);break;
            case 's':subtract(x,y);break;
            case 'm':multiply(x,y);break;
            case 'd':divide(x,y);break;
        }
    }
    
    return 0;
}