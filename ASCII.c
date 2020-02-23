//write a program that print all ascii value.
#include<stdio.h>
int main()
{
    int i;
    for(i=1;i<=255;i++)
    {
        printf("the ASCII value of %c = %d\n",i,i);
    }
    return 0;
}
