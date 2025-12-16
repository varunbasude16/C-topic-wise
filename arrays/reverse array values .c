#include<stdio.h>
int main()
{
	int i,n,sub[100];
	printf("enter size of array \n ");
	scanf("%d",&n);
	printf("enter arrays values \n");
	for(i=0;i<n;i++)
	scanf("%d",&sub[i]);
	printf("array in reverse are \n");
	for(i=n-1;i>=0;i--)
	printf("%d\n",sub[i]);
}
