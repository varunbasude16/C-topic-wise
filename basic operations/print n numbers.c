#include <stdio.h>

int main()
{
  float a,b;
  printf("enter numarator and denomanirtor \n");
  scanf("%f%f",&a,&b);
  if(b==0)
  {
  	float c;
  	printf("pls enter a non zero denominator \n");
  	scanf("%d",&b);
  	c=a/b;
  	printf("their division is %f \n",c);
  }
  else
  {
  	float k;
  	k=a/b;
  	printf("their division is %f \n",k);
  }
  return 0;
}
