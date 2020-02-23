//write a program that show keyboard all character
#include <stdio.h>
int main()
{
    char ch;
    while(scanf("%c",&ch) == 1){
        while(ch <= 'z'){
            ch++;
            printf("%c ",ch);
        }
        printf("\n");

    }

    return 0;
}
