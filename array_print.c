//simple array print program
#include<stdio.h>
int main()
{
    int i;
    int arr[10];

    for(i=0; i<5; i++)
    {
        scanf(" %d",&arr[i]);
    }
    for(i=0; i<5; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;

}
