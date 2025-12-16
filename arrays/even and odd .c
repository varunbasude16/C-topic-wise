#include<stdio.h>
int main()
{
	int i,n,a[100],max,min;
	printf("enter size of array\n");
	scanf("%d",&n);
	printf("enter array values\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	max=a[0];
	for(i=1;i<=n;i++)
	{
		if(max<a[i])
		max=a[i];
	}
	printf(" max value is=%d",max);
	return 0;
}
