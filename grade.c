//this program check the grade value
#include<stdio.h>
int main()
{
    float m;

    scanf("%f", &m);
    if(m<0 || m>100)
        printf("Invalid mark");
    else if(m>=70)
        printf("Grade = A");
    else if(m>=60)
        printf("Grade = A-");
    else if(m>=50)
        printf("Grade = B");
    else if(m>=40)
        printf("Grade = C");
    else if(m>=33)
        printf("Grade = D");
    else
        printf("Grade = F");
return 0;
}
