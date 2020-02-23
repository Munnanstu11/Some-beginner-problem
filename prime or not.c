#include<stdio.h>
int main()
{
    int num,i,count=0;
    printf("Enter any positive number\n");
    scanf("%d",&num);
    for(i=2; i<num; i++)
    {
        if(num%i==0)
        {
            count++;
            break;
        }
    }
    if(count==0)
        printf("the number is prime\n");
    else
        printf("the number is not prime");
    return 0;

}
