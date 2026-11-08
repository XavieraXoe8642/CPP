//T5
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void pick(int arr[],int size,int count)
{
    int i;
    for (i=0;i<count;i++)
    {
        int index=rand()%size;
        printf("%d ",arr[index]);

        int temp=arr[index];
        arr[index]=arr[size-1];
        arr[size-1]=temp;
        size--;
    }
}

int main()
{
    int n,selectNum;
    printf("请输入数组元素个数：");
    scanf("%d",&n);
    int arr[n];
    printf("依次输入数组的%d个整数：",n);
    
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("请输入要随机抽取的数量：");
    scanf("%d",&selectNum);

    srand(time(NULL));
    printf("随机抽取的不重复元素：");
    pick(arr,n,selectNum);
    return 0;
}