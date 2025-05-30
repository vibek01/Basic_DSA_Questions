#include<stdio.h>
#include<string.h>
int main()
{
    int size = 0,i = 0;
    char str[50];
    printf("Enter a string : ");
    scanf("%[^\n]s",str);
    while(str[i] != '\0')
    {
        size++;
        i++;
    }
    printf("The string is : %s", str);
    printf("\nThe reverse is : ");
    // int x=32;
    // str[0] = str[size-1+(char)x];
    for(i=size-1; i>=0; i--)
    {
        printf("%c",str[i]);
    }
    printf("\nReturn status 0");
    return 0;
}