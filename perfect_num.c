/*Perfect number, a positive integer that is equal to the sum of its
proper divisors. The smallest perfect number is 6,which is the sum of 1,2 and 3.
Other perfect numbers are 28,496, and 8128.*/
#include<stdio.h>
int main()
{
    int num,i,rem,sum=0;
    printf("Enter a number:\n");
    scanf("%d",&num);
    for(i=1;i<num;i++)
    {
        rem = num%i;
        if(rem==0)
        {
            sum=sum+i;
        }
    }
    if(sum==num)
        printf("the number is perfect number\n");
    else
        printf("the number is not perfect number\n");

    return 0;
}
