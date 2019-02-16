#include <stdio.h>
int main()
{
    int n1, n2,res;

    printf("Enter two integers: ");
    scanf("%d %d", &n1, &n2);
    res=gcd(n1,n2);
    printf("%d",res);
    return 0;
}
int gcd(int n1,int n2)
{
    int gcd;
    for(int i=1; i <= n1 && i <= n2; ++i)
    {
        // Checks if i is factor of both integers
        if(n1%i==0 && n2%i==0)
            gcd = i;
    }
    return gcd;
}
