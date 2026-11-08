//T14
#include<stdio.h>
int main()
{
    double arr1[8];
    double arr2[8];
    
    printf("请输入8个数:");
    for(int i=0;i<8;i++)
    {
        scanf("%lf",&arr1[i]);
    }
    
    //嵌套循环方法
    // for(int j=0;j<8;j++) 
    // {
    //     for(int i=0;i<=j;i++)
    //     {
    //         arr2[j] +=arr1[i];
    //     }
    // }   
      
    //一个循环方法
    arr2[0]=arr1[0];
    for(int j=1;j<8;j++)
    {
        arr2[j]=arr2[j-1]+arr1[j];
    }
            
    for(int i=0;i<8;i++)
    {
        printf("%10lf ",arr1[i]);
    }   
    printf("\n");   
    for(int i=0;i<8;i++)
    {
        printf("%10lf ",arr2[i]);
    }     
    
    return 0;
}