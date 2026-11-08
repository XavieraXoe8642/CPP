//T1
#include <stdio.h>
#include <string.h>

int month(char *mon)
{
    if(strcmp(mon,"January")==0) return 1;
    if(strcmp(mon,"February")==0) return 2;
    if(strcmp(mon,"March")==0) return 3;
    if(strcmp(mon,"April")==0) return 4;
    if(strcmp(mon,"May")==0) return 5;
    if(strcmp(mon,"June")==0) return 6;
    if(strcmp(mon,"July")==0) return 7;
    if(strcmp(mon,"August")==0) return 8;
    if(strcmp(mon,"September")==0) return 9;
    if(strcmp(mon,"October")==0) return 10;
    if(strcmp(mon,"November")==0) return 11;
    if(strcmp(mon,"December")==0) return 12;
    return -1;
}

int main()
{
    char m[20];
    printf("输入月份的英文全称：");
    scanf("%s", m);
    printf("月份编号：%d\n", month(m));
    return 0;
}