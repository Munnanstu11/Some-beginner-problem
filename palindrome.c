//palindrome number check using string
#include<stdio.h>
int main()
{
    char str1[100];
    char str2[100];

    //scanf("%s",str1);
    while(scanf("%s",str1)==1)
    {
        strcpy(str2,str1);
        strrev(str2);
        if(strcmp(str1,str2)==0)
            printf("the string is palindrome\n");
        else
            printf("the string is not palindrome\n");

    }
    return 0;

}
