#include <stdio.h>
int factr(int i)
{
    if(i==1)
        return 0;
    if(i==2)
        return 1;
    else
        return factr(i-1) + factr(i-2);
}
int main()
{
    for(int i=1;i<=10;i++)
        printf("%d\n",factr(i));
}
