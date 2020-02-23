//the program print the length of string
#include<stdio.h>
#include<string.h>
int main()
{
    int length;
    char line[100];
    gets(line);
    length=strlen(line);

    printf("the length is %d\n",length);

    return 0;

}
