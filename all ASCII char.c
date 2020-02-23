


//write a program which print all ascii value
#include <stdio.h>
int main()
{
    int i;

    for( i=0 ; i<=255 ; i++ ) /*ASCII values ranges from 0-255*/
    {
        printf("ASCII value of character %c = %d\n", i, i);
    }

    return 0;
}








/*#include <stdio.h>
int main()
{
    int i,n;

    scanf("%d",&n);

    for(i = 0; i <= n; i++){
        printf("%d = %c\n",i,i);
    }

    return 0;
}*/
