#include<stdio.h>
#include<string.h>
int main()
{
    int i,length=0;
    char str[100];
    while(gets(str))
    {
        length = strlen(str);
        int vowel=0,consonant=0;

        for(i=0; i<length; i++)
        {
            if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')
                vowel++;
            else
                consonant++;


        }
        printf("vowel = %d consonant=%d",vowel,consonant);
    }
    return 0;
}
