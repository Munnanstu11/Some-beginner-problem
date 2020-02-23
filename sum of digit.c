//this program shows the sum of digit like 23=5,56=11.
#include<stdio.h>
int main()
{
    int n,digit=0,sum=0;
    printf("Enter a Number:");
    scanf("%d",&n);
    while(n!=0)
    {
        digit=n%10;
        n=n/10;
        sum=sum+digit;
    }
    printf("the sum of digit=%d",sum);
   return 0;
}
