#include<stdio.h>
#include<string.h>
int main()
{
    char str[20] = "vibek";
    for(int i=0; i<strlen(str); i++)
    {
        str[i] = str[i] - 32;
        printf("%c",str[i]);
    }
    return 0;
}