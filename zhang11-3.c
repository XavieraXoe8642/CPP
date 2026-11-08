//T3
#include <stdio.h>

void read_word(char arr[], int max_len)
//当数组作为函数参数时，会自动退化为指针 char *arr
{
    scanf("%s", arr);
    // scanf("%s")自带跳过前导空白（空格/tab）
    char ch;
    while( (ch = getchar()) != '\n' );
    //除去本行其余字符

}

int main()
{
    char word[100];
    printf("请输入内容：");
    read_word(word, 100);
    printf("第一个单词：%s\n", word);
    return 0;
}
