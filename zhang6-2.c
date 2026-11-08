//T10
#include<stdio.h>
int main()
{
    int a,b,i,x=0;
    
    while(1)
    {
        printf("Enter lower and integer limits:");
        scanf("%d%d",&a,&b);
        if(b>a)
        {
            for(i=a;i<=b;i++)
            {
                x += i*i;
            }
            printf("The sums of the squares from %d to %d is %d\n",a*a,b*b,x);
        }
        else
        {
            printf("Done");
            break;
        }
    }
    
    return 0;
}