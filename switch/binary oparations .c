#include <stdio.h>
int main()
{
  float a,b;
  char k;
  printf("Enter the oparator(+,-,/,*,%) to perfom between two numbers \n");
  scanf("%c",&k);
  printf("Enter two numbers \n");
  scanf("%f%f",&a,&b);
  switch(k)
  {
  	case'+':printf("%f is sum b/w them",a+b);
  	break;
  	case'-':printf("%f is diffrrence",a-b);
  	break;
  	case'/':printf("%f is their divion",a/b);
  	break;
  	case'*':printf("%f is their multiplication",a*b);
  	break;
	default:printf("error");
  }

  return 0;
}
