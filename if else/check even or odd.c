#include <stdio.h>
int main()
{
  int a;
  printf("Enter number to check even or odd \n");
  scanf("%d",&a);
  if(a%2==0)
  {
  	printf("It is Even \n");
  }
  else
  {
  	printf("It is Odd");
  }
  return 0;
}
