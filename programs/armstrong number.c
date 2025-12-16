#include <stdio.h>
int main()
{
  int original,rem,sum,i,n;
  printf("Enter number to check armstrong number\n");
  scanf("%d",&n);
  original=n;
  while(n!=0)
  {
  	rem = n%10;
  	sum=sum+ (rem*rem*rem); 
  	n=n/10 ;
  }
  if ( sum == original){
	printf(" yeah, its armstrong number \n");
  }
  else{
  	printf("bro, its not armstrong number \n");
  }
  
  
}
