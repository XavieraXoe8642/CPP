//T4
#include <stdio.h>

int main(int argc, char *argv[])
{
    FILE *fp;
    int ch, i;
    for (i = 1; i < argc; i++)
    {
        fp = fopen(argv[i], "r");
        while ((ch = getc(fp)) != EOF)
            putchar(ch);
        fclose(fp);
    }
    return 0;
}