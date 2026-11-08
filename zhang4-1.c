//T6
#include<stdio.h>
#include<string.h>
int main()
{
    char m[100];
    char x[100];
    printf("请输入名:");
    scanf("%s",m);
    printf("请输入姓:");
    scanf("%s",x);
    //输入存进char数组，不用取址符&

    int len1=strlen(m);
    int len2=strlen(x);

    printf("%s %s\n",m,x);
    printf("%*d %*d\n",len1,len1,len2,len2);
    printf("%s %s\n",m,x);
    printf("%-*d %-*d\n",len1,len1,len2,len2);

    return 0;
}