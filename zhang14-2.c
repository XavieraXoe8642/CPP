//T2
#include <stdio.h>
int days[12]={31,28,31,30,31,30,31,31,30,31,30,31};

int date(int y,int m,int d)
{
    int i,sum = 0;
    for(i=0;i<m-1;i++)
        sum+=days[i];
    sum+=d;
    return sum;
}

int main(void)
{
    int year,month,day;
    printf("请输入年/月/日：");
    scanf("%d/%d/%d",&year,&month,&day);
    printf("该日期是这一年的第%d天\n",date(year,month,day));
    return 0;
}