#include <stdio.h>
#include <math.h>
void f(int a,int b,int c)  
{
  double D,x1,x2;
  D=(b*b)-4*a*c;
  if (D>0)
  {
      x1=(-b+sqrt(D))/(2*a);
      x2=(-b-sqrt(D))/(2*a);
      printf("x1 = %f ",x1); 
      printf("x2 = %f ",x2); 
  }
  if (D<0)
  {
      printf("Вещественных корней нет");
  }
  if (D==0)
  {
      x1=(-b+sqrt(D))/(2*a);
      printf("x1 = x2 = %f ", x1);
  } 
}
 
int main()
{
    int a, b, c;
    printf("Enter a,b,c\n");
    scanf("%d %d %d" ,&a, &b, &c);
    f(a,b,c);
    return 0;
}