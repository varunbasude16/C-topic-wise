#include <stdio.h>
int main()
{
  int rem,sum,i,n;
  printf("Enter number to get its sum \n");
  scanf("%d",&n);
  while(n!=0)
  {
  	rem = n%10;
  	sum=sum + rem ; 
  	n=n/10 ;
  }
  printf("%d",sum);
  return 0;
}
