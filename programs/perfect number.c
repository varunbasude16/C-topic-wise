#include<stdio.h>
int main()
{
	int n,i,sum=1,original;
	printf("Enter number to check perfect number \n");
	scanf("%d",&n);
	original=n;
	for(i=1;i<=n;i++)
	{
		if(n%i == 0)
		sum= sum + i ;
	}
	if (sum==original){ 
	printf(" yeah, its perfect number \n");
	}
	else
	printf("no, its not a perfect number \n");
	return 0;
}
