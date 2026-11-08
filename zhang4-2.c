//T5
#include<stdio.h>
int main()
{
    float v,n;
    printf("请输入下载速度(兆位每秒 Mb/s):");
    scanf("%f",&v);
    printf("请输入文件大小(兆字节 MB):");
    scanf("%f",&n);
    printf("At %.2f megabits per second, a file of %.2f megabytes\ndownload in %.2f second.",v,n,(8*n)/v);

    return 0;
}