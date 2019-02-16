#include<stdio.h>
int main()
{

    int num,sum;
    printf("Enter positive numbers (0 or -ve number to stop):\n");
    scanf ("%d", &num);
    sum = 0;
    while (num > 0)
        {
            sum += num;
            scanf ("%d", &num);
        }
    printf ("Sum = %d ", sum);
    getch();
    return 0;
}
