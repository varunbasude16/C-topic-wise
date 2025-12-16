#include <stdio.h>
int main()
{
  int a;
  printf("Enter number to check even or odd \n");
  scanf("%d",&a);
  if(a!=0)
  {
  	if(a%2==0)
  	printf("It is Even \n");
    else
  	printf("It is Odd");
  }
  else 
  printf("its zero \n");
  return 0;
}
