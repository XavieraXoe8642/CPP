//T3
#include <stdio.h>
#include <math.h>

struct Polar {
    double r;
    double angle;
};

struct Rect {
    double x;
    double y;
};

struct Rect convert(struct Polar p)
//转换函数：接收极坐标结构体，返回直角坐标结构体
{
    struct Rect res;
    double rad=p.angle*M_PI/180.0;
    //角度要转弧度：角度*M_PI/180
    res.x=p.r*cos(rad);
    res.y=p.r*sin(rad);
    return res;
}

int main()
{
    struct Polar input;
    struct Rect out;
    printf("输入模r和角度(度)：");
    scanf("%lf%lf",&input.r,&input.angle);

    out=convert(input);
    printf("x=%.2f,y=%.2f\n",out.x,out.y);
    return 0;
}