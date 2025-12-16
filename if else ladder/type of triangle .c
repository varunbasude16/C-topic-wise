#include <stdio.h>
int main()
{
  float a,b,c;
  printf("Enter sides of triangles \n");
  scanf("%f%f%f",&a,&b,&c);
  if((a==b)&&(b==c)&&(c==a))
  printf("equilateral triangle \n");
  else if((a==b)||(b==c)||(c==a))
  printf("isoscales triangle \n");
  else
  printf("scaler triangle \n");
  return 0;
}
