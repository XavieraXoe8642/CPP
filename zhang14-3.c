//T4a
#include <stdio.h>

struct Name{
    char first[20];
    char mid[20];
    char last[20];
};

struct Person{
    char id[20];
    struct Name name;
};

void daiyin(struct Person p)
{
    if(p.name.mid[0] != '\0')
        printf("%s,%s %c.--%s\n",p.name.last,p.name.first,p.name.mid[0],p.id);
    else
        printf("%s,%s--%s\n",p.name.last,p.name.first,p.id);
}

int main()
{
    struct Person people[5] = {
        {"302039823", {"Flossie","M","Dribble"}},
        {"111111111", {"Alice","","Brown"}},
        {"222222222", {"Bob","A","Smith"}},
        {"333333333", {"Cindy","","Green"}},
        {"444444444", {"David","K","White"}}
    };
    int i;
    for(i=0;i<5;i++)
    {
        daiyin(people[i]);
    }
    return 0;
}