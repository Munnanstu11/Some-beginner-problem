//this program shows the result of sum of numbers like 1+2+3=6
#include<stdio.h>
int main()
{
    int n,i,sum=0;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
       sum=sum+i;
    printf("the sum is %d\n",sum);
    return 0;
}
