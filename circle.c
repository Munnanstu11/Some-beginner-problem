//the program prints the area of circle
#include<stdio.h>
#define pi 3.1416
int main()
{
    int r;
    float area;
    printf("Enter the radius of the circle:\n");
    scanf("%d",&r);
    area = pi*r*r;
    printf("the radius of the circle is %f",area);
    return 0;
}
