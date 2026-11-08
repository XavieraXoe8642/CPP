//T1
#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    unsigned long count = 0;
    int ch;
    char file_name[80];
    printf("请输入要读取的文件名：");
    scanf("%s", file_name);

    if ((fp=fopen(file_name, "r"))==NULL)
    {
        printf("无法打开文件 %s\n", file_name);
        exit(EXIT_FAILURE);
    }
    while ((ch=getc(fp))!=EOF)
    {
        count++;
    }
    fclose(fp);
    printf("文件%s一共有%lu个字符\n",file_name,count);
    return 0;
}