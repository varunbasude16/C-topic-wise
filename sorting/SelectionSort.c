#include<stdio.h>
void selection(int* a,int n){
	int i,j,min,t;
	for(i=0;i<n-1;i++)
	{
		min=i;
		for(j=i+1;j<n;j++)
		if (a[min]>a[j])
		min=j;
		if(min!=i){
			t=a[min];
			a[min]=a[i];
			a[i]=t;
		}
		
	}
	printf("\nafter:\n");
	for(i=0;i<n;i++)
	printf("%d ",a[i]);
}
void main()
{
	int a[100],n,i;
	printf("enter number of elements :");
	scanf("%d",&n);
	printf("enter elements :");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("before;\n");
	for(i=0;i<n;i++)
	printf("%3d",a[i]);
	selection(a,n);
}
