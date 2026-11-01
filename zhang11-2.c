//T2
#include <stdio.h>

void read_char(char arr[], int n)
{
    int i;
    char ch;
    for(i = 0;i < n;i++)
    {
        ch = getchar();
        if (ch == ' ' || ch == '\t' || ch == '\n')
            break;
        arr[i] = ch;
    }
    arr[i] = '\0'; 
}

int main()
{
    char arr[100];
    int num;
    printf("最多读取的字符数目：");
    scanf("%d", &num);
    getchar();
    printf("输入内容：");
    read_char(arr, num);
    printf("得到字符串：%s\n", arr);
    return 0;
}