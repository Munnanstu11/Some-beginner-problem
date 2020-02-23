//write a program that swap two numbers.
#include<stdio.h>
int main()
{
    int a,b,temp;
    printf("Enter the two Number:");
    scanf("%d %d",&a,&b);

    temp=a;
    a=b;
    b=temp;

    printf("the numbers are %d %d",a,b);

    return 0;

}
