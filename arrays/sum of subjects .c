#include<stdio.h>
int main()
{
	int i,n,sum=0,sub[100];
	printf("enter number of subjects \n ");
	scanf("%d",&n);
	printf("enter subject values  \n");
	for(i=0;i<n;i++){
		scanf("%d",&sub[i]);
		sum=sum+sub[i];
	}
	
	printf("their sum is=%d", sum);
}
