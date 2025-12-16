#include<stdio.h>
int main()
{
	int i,n,sub[100];
	printf("enter number of subjects \n ");
	scanf("%d",&n);
	printf("enter arrays values\n");
	for(i=0;i<n;i++)
	scanf("%d",&sub[i]);
	for(i=0;i<n;i++)
	printf("sub %d marks are %d\n",i+1,sub[i]);
}
