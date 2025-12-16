#include <stdio.h>

int main()
{
  float a,b;
  printf("enter numarator and denomanirtor \n");
  scanf("%f%f",&a,&b);
  if(b==0)
  {
  	printf("pls enter a non zero denominator \n");
  }
  else
  {
  	printf("their division is %f \n",a/b);
  }
  
  return 0;
}
