//this program check the min and max number
#include<stdio.h>
int main()
{
    int arr[5],i,t;
    scanf("%d",&t);

    while(t--)
    {
        for(i=0; i<5; i++)
        {
            scanf("%d",&arr[i]);
        }
        int min,max=0;
        for(i=0; i<5; i++)
        {
            if(arr[i]<min)
                min=arr[i];
            if(arr[i]>max)
                max=arr[i];

        }
        printf("max=%d, min=%d\n",max,min);
    }
    return 0;
}
