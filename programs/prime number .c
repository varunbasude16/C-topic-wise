#include <stdio.h>
int main()
{
  int count,i=1,n;
  printf("Enter number to check prime number \n");
  scanf("%d",&n);
  for(i=1; i<=n ; i++)
  {
  	if(n%i==0)
  	{
	  count++;
	  }
  }
  if ( count == 2){
	printf(" yeah, its prime number \n");
  }
  else{
  	printf("bro, its not prime number \n");
  }
  
  
}
