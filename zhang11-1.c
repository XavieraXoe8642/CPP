//T1
#include <stdio.h>

void read_char(char arr[], int n)
{
    int i;
    char ch;
    for (i = 0; i < n; i++)
    {
        ch = getchar();
        arr[i] = ch;
    }
    arr[n] = '\0'; 
}

int main()
{
    char arr[100];
    int num;
    printf("请输入想要读取多少个字符：");
    scanf("%d", &num);
    getchar(); 
    // 吃掉输入数字后的换行
    printf("输入文本：");
    read_char(arr, num);
    printf("读取到的内容：\n");
    puts(arr);
    //输出一个字符串，自动在末尾添加\n
    return 0;
}