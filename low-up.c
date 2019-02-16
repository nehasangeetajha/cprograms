#include<stdio.h>
#include<ctype.h>
int main()
{
    char a;
    printf("enter any alphabet:");
    a=getchar();
    if(islower(a))
        putchar(toupper(a));
    else
        putchar(tolower(a));
        getch();
        return 0;
}
