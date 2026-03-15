// Simple Calculator using Conditional Statements
#include<stdio.h>
int main()
{
  char op;
  int a ,b,result;
  printf("Enter the valid operator:");
  scanf("%c",&op);
  if(op=='+' || op=='-' || op=='*' ||op=='/')
  {
   printf("Enter VAlues for a and b:");
   scanf("%d%d",&a,&b);
   if(op=='+') 
    {
      result=a+b;
      printf("Addition of a and b:%d",result);
    }
    else if(op=='-') 
    {
      result=a-b;
      printf("Differnece of a and b:%d",result);
    }
    else if(op=='*') 
    {
      result=a*b;
      printf("Product of a and b:%d",result);
    }
    else if (op=='/')
    {
      if(b==0)
      {
        printf("Zero Division Error !");
      }
      else
      {
      result=a/b;
      printf("Division of a and b:%d",result);
      }
    }
  }
 else 
 {
  printf("Invalid Operator !");
 }
return 0;
  }
