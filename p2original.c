#include<stdio.h>
int input(int *a,int *b,int *c)
{
  printf("enter the three numbers");
  scanf("%d%d%d",a,b,c);
  return 0;
}
void cmp(int a,int b,int c,int *result)
{
  if(a!=b && b!=c && c!=a)
  {
    *result=3;
  }
    else
    {
    *result=4;
    }
}
void output(int result)
{
if (result==3)
{
printf("it is scalene triangle");
}
else if(result==4)
{
  printf("it is not scalene triangle");
}
}
int main()
{
  int a,b,c,result;
input(&a,&b,&c);
cmp(a,b,c,&result);
output(result);
return 0;
}