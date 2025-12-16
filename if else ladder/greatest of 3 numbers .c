#include <stdio.h>
int main()
{
  int a,b,c;
  printf("Enter 3 numbers to get their greatest \n");
  scanf("%d%d%d",&a,&b,&c);
  if((a>b)&&(a>c))
  printf("%d is greattest \n",a);
  else if((b>c)&&(b>a))
  printf("%d is greatest \n",b);
  else
  printf("%d is greatest \n",c);
  return 0;
}
