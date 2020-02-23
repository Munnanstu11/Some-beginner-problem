//this program print the given word reversely
#include<stdio.h>
int main()
{
    int i,length=0;
    char str[50];

    while(scanf("%s",str)==1)
    {
        length = strlen(str);
        for(i=length-1; i>=0; i--)
        {
            printf("%c",str[i]);
        }
        printf("\n");

    }
    return 0;


}
