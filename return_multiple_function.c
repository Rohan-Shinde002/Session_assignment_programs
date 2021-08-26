//PROGRAM TO RETURN MULTIPLE VALUES FROM FUNCTION

#include<stdio.h>

void div(int a, int b, int *add, int *sub) 
{
   *add=a+b;
   *sub=a-b;
}
int main() 
{
   int a=10,b=5;
   int add,sub;
   div(a,b,&add,&sub);
   printf("Addition is : %d\nDivision is : %d\n",add,sub);
   return 0;
}