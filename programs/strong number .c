#include <stdio.h>
int main()
{
  int original,rem,sum=0, fact=1,i=1,n;
  printf("Enter number to check strong number \n");
  scanf("%d",&n);
  original=n;
  while(n!=0)
  {
  	rem = n%10;
  	for(i=1; i<=rem;i++){
  		fact=fact*i;
	  }
	sum=sum+fact  ;
  	n=n/10 ;
  }
  if ( sum == original){
	printf(" yeah, its strong number \n");
  }
  else{
  	printf("bro, its not strong number \n");
  }
  
  
}
