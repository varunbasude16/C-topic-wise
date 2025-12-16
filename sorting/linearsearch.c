#include<stdio.h>
int linear(int* a,int n, int g)
{
	int i;
	for(i=0;i<n;i++)
	if(a[i]==g)
	return i+1;
	if(i==n)
	return -1;
}
void main()
{
	int a[100],n,i,g;
	printf("enter array size :");
	scanf("%d",&n);
	printf("enter elements:");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("elements:");
	for(i=0;i<n;i++)
	printf("%d ",a[i]);
	
	printf("\nenter key:");
	scanf("%d",&g);
	if ( linear(a,n,g)!=-1)
	printf("position=%d\n",linear(a,n,g));
	else 
	printf("not found");
	
	
	
	
	
}
