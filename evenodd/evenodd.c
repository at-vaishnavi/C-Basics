// Program to find the Whether the number is even or odd
#include<stdio.h>
int main()
{
  int num;
  printf("Enter a value for num:");
  scanf("%d",&num);
  if(num % 2==0)
  {
    printf("The Given Number is Even");
  }
  else
  {
    printf("The Given Number is Odd");
  }
 return 0;
}

