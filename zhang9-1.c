//T3
#include<stdio.h>

void dayin(char ch,int x,int y)
{
    int i,j;
    for(j=1;j<=y;j++)
    {
        for(i=1;i<=x;i++)
        {
            printf("%c",ch);
        }
        printf("\n");
    }
}

int main()
{
    char ch;
    int x,y;
    scanf("%c%d%d",&ch,&x,&y);
    dayin(ch,x,y);
    return 0;
}