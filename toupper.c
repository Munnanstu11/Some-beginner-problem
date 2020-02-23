//this program shows the convertion of small letter to capital letter
#include <stdio.h>
int main()
{
    char ch;
    scanf("%c",&ch);
    printf("Display the Upper case: ");
    printf("%c\n",toupper(ch));
    //printf("%c",tolower(ch));

    return 0;
}

