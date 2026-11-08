//T2 X
#include<stdio.h>

int main()
{
    int count=0;
    char ch;
    while(scanf("%c",&ch)!=EOF)
    {
        if(ch=='\n')
            printf("\n ",ch);
        else if(ch=='\t')
            printf("\t ",ch);
        else
            printf("%c ",ch);
        printf("%d ",(int)ch);
        count++;
        if(count%10==0)
            printf("\n");
    }
    return 0;
}

