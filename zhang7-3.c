//T11
#include<stdio.h>

int main()
{
    int i,j,k;
    int I,J,K;
    float A=0.0,B=0.0,C=0.0;
    //算磅数和每种价格
    while(1)
    {
        char x;
        scanf("%c",&x);
        switch(x)
        {
        case 'a':
            printf("请输入洋蓟的磅数\n");
            scanf("%d",&i);
            I +=i;
            A +=2.05*i;
            break;
        case 'b':
            printf("请输入甜菜的磅数\n");
            scanf("%d",&j);
            J +=j;
            B +=1.15*j;
            break;
        case 'c':
            printf("请输入胡萝卜的磅数\n");
            scanf("%d",&k);
            K +=k;
            C +=1.09*k;
            break;
        case 'q':
            goto end;   
        }
    }

    end:
    //算菜的总价和折扣
    float z=A+B+C;
    float h,y;
    if(z>=100)
    {
        y=0.05;
        h=z*y;
    }    
    else
    {
        y=0.0;
        h=z;
    }    
    //算运费
    float m;
    if((i+j+k)<=5)
        m=6.5;
    else if((i+j+k)>5&&(i+j+k)<=20)
        m=14;
    else
        m=14+(i+j+k-20)*0.5;

    printf("物品售价:\n洋蓟:2.05美元/磅\n甜菜:1.15美元/磅\n胡萝卜:1.09美元/磅\n");
    printf("订购重量:\n洋蓟:%d\n甜菜:%d\n胡萝卜:%d\n",I,J,K);
    printf("订购的蔬菜费用:\n洋蓟:%f\n甜菜:%f\n胡萝卜:%f\n",A,B,C);
    printf("订单的总费用=%f\n",z);
    printf("折扣=%f\n",y);
    printf("运费和包装费=%f\n",m);
    printf("总费用=%f\n",h+m);

    return 0;
}