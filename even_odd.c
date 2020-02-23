//write a program that check the number is even or odd.
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the value:\n");
    scanf("%d",&n);
    if(n%2==0)
    {
        printf("the number is Even.");
    }
    else
    {
        printf("the number is odd.");
    }
    return 0;
}
