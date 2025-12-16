#include <stdio.h>
int main()
{
  int rem,sum = 0 ,i,n;
  printf("Enter number to get its reverse \n");
  scanf("%d",&n);
  if(n%10 == 0){
  		printf("0");
	  }
  while(n!=0)
  {
  	
  	rem = n%10;
  	sum=(sum*10) + rem ; 
  	n=n/10 ;
  }
  printf("%d",sum);
  return 0;
}
