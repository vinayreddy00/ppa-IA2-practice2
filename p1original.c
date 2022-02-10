#include<stdio.h>
void input(float*base ,float*height)
{
  printf("enter the base");
  scanf("%f",base);
  printf("enter the height");
  scanf("%f",height);
}
void find_area(float base ,float height,float*area)
{
  *area=((base*height)/2);
}
void output(float area)
{
  printf("area of triange is %f",area);
}
int main()
{
  float base,height,area;
  input(&base,&height);
  find_area(base,height,&area);
  output(area);
  return 0;
}