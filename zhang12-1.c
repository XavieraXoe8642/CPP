//T1
#include <stdio.h>

void critic(int * pu)
//pu：接收units变量的地址，可以修改main中的units
{
    printf("No luck, my friend. Try again.\n");
    scanf("%d", pu); 
    //pu本身就是地址，不用再加&
} 

int main()
{
    int units;  
    //units变成main的局部变量
    printf("How many pounds to a firkin of butter?\n");
    scanf("%d", &units);

    while (units != 56)
        critic(&units);  // ✅ 传入units的地址

    printf("You must have looked it up!\n");
    return 0;
}

