#include <stdio.h>
int main()
{
  int i,n;
  i=1;
  printf("Enter number of times msg to be printed \n");
  scanf("%d",&n);
  while(i<=n)
  {
  	printf("Welcome \n");
  	i++;
  }
  return 0;
}
