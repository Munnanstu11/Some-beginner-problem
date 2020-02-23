//the program prints the factorial value of a number
#include<stdio.h>
int main()
{
    int n,i,fact=1;
    printf("Enter the Number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    printf("the number %d factorial = %d",n,fact);

    return 0;
}
