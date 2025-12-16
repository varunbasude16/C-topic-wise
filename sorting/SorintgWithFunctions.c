#include<stdio.h>
void selection_sort(int a[],int n);
int main()
{
	int i,j,k,n,min,temp;
	printf("enter the size of array");
	scanf("%d",&n);
	int a[n];
	printf("enter the elements");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	selection_sort(a,n);
	return 0;	
}
void selection_sort(int a[],int n)
{int i,j,min,temp;

for(i=0;i<n-1;i++)
{
min=i;
	for(j=i+1;j<n;j++)
	{
		if(a[j]<a[min])
		min=j;
		
	}
	if(i!=min)
	{
		temp=a[min];
		a[min]=a[i];
		a[i]=temp;
		
	}

}
		printf("the sorted array is:");
	for(i=0;i<n;i++)
	printf("%d  ",a[i]);
	
}
