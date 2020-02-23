//this program shows the area of triangle
#include<stdio.h>
int main()
{
    double height,width;
    double area;
    scanf("%lf %lf",&height,&width);
    //while(scanf("%f %f",&height,&width)==2)
    // {
    area = .5*height*width;
    printf("Area of triangle = %.2lf",area);
    //}
    return 0;
}
