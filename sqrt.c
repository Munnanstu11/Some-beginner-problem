//write a program that shows root value of any number
#include<stdio.h>
#include<math.h>
int main()
{
    float num,result;

    printf("Enter the number:\n");

    scanf("%f", &num);

    result = sqrt(num);

    printf("%.2f\n", result);

    return 0;
}
