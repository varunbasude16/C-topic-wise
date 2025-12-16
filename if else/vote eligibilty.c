#include <stdio.h>
int main()
{
  int a;
  printf("enter age of the person \n");
  scanf("%d",&a);
  if(a>=18)
  {
  	printf("person is eigible to vote \n");
  }
  else
  {
  	printf("person is not eligible to vote ");
  }
  return 0;
}
