#include <stdio.h>
int main()
{
  int original,rem,sum,i,n;
  printf("Enter number to check palindrome \n");
  scanf("%d",&n);
  original=n;
  while(n!=0)
  {
  	rem = n%10;
  	sum=(sum*10) + rem ; 
  	n=n/10 ;
  }
  if ( sum==original ) {
  	printf(" its palindrome ");
  }
  else 
  printf(" its not palindrome");
  return 0;
}
