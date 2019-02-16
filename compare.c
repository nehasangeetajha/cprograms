#include<stdio.h>

#include<conio.h>

void main()

{

  int num1,num2;


  printf("Enter any two numbers:");

  scanf("%d%d",&num1,&num2);

  /* Checking for equality */

  if(num1==num2)

    printf("\nResult:%d=%d",num1,num2);

  /* Checking for inequality */

  else if(num1>num2)

    printf("\nResult:%d>%d",num1,num2);

  else

   printf("\nResult:%d<%d",num1,num2);

  getch();
  return 0;
}

