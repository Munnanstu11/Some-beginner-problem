//this program check the leap year or not
#include<stdio.h>
int main()
{
    int year;
    scanf("%d",&year);
    if(year%4==0 || year%400==0)
    {
        printf("the year is leap year\n");
    }
    else
    {
        printf("the year is not leap year\n");
    }
    return 0;
}
