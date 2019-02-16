#include <stdio.h>
int main()
{
    int i, n, t1 = 0, t2 = 1, tn;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("\nFibonacci Series: ");

    for (i = 1; i <= n; ++i)
    {
        printf("%d, ", t1);
        tn = t1 + t2;
        t1 = t2;
        t2 = tn;
    }
    getch();
    return 0;
}
