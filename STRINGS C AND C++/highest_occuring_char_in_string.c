#include<stdio.h>
#include<string.h>
int main()
{
    int vowel = 0, consonant = 0;
    char str[40];
    printf("Enter a string : ");
    scanf("%[^\n]s", str);
    int size = strlen(str);
    for(int i=0; i<size; i++)
    {
        if(str[i] == "a"||"e"|| "i"|| "o"|| "u")
        {
            vowel++;
        }
        else 
        {
            consonant++;
        }
    }
    printf("\nVowel : %d and Consonants : %d",vowel,consonant);
    return 0;
}