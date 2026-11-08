//T5
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void jiangxu(int arr[], int n)
{
    int i,j,temp;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(arr[j]<arr[j+1]) 
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}

int main()
{
    int num[100];
    int i;
    srand((unsigned)time(NULL));
    //给随机数生成器设置种子，保证每次运行程序，rand()出来的随机序列不一样
    //time(NULL)：拿到当前系统时间(从1970到现在的秒数，每一秒都在变)?
    //(unsigned)：强制转换成无符号整数，匹配srand参数类型，避免警告
    //srand(种子值)：把上面拿到的不断变化的时间交给随机数发生器，作为起点

    for(i = 0; i < 100; i++)
    {
        num[i] = rand() % 10 + 1; 
    }
    jiangxu(num, 100);
    printf("100个1~10随机数的降序排列：\n");
    for(i = 0; i < 100; i++)
    {
        printf("%d ", num[i]);
        if((i+1)%10 == 0)
            printf("\n");
    }
    return 0;
}