//T2
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    FILE *in, *out;
    int ch;
    if (argc!=3)  //判断命令行参数数量：程序名 + 源文件 + 目标文件 → argc ==3
    {
        printf("用法：%s 源文件名 目标文件名\n",argv[0]);
        exit(EXIT_FAILURE);
    }

    if ((in=fopen(argv[1],"rb"))==NULL)
    {
        printf("无法打开源文件%s\n",argv[1]);
        exit(EXIT_FAILURE);
    }

    if ((out=fopen(argv[2],"wb"))==NULL)
    {
        printf("无法创建目标文件%s\n",argv[2]);
        exit(EXIT_FAILURE);
    }

    while ((ch = getc(in)) != EOF)
    {
        putc(ch, out);
    }

    fclose(in);
    //关闭已经用 fopen 打开的文件，释放文件资源，把缓冲区的数据真正写入磁盘
    fclose(out);
    printf("文件拷贝完成！%s→%s\n",argv[1],argv[2]);
    return 0;
}