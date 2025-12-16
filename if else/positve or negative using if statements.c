#include <stdio.h>
int main()
{
  int a;
  printf("Enter non-zero number to check positive or negative \n");
  scanf("%d",&a);
  if(a>0)
  {
  	printf("It is positive \n");
  }
  else
  {
  	printf("It is negative \n");
  }
  return 0;
}
