#include<stdio.h>
void bubble(int* a,int n){
	int i,j;
	for(i=0;i<n-1;i++)
	for(j=0;j<n-1-i;j++)
	if ( a[j]>a[j+1])
	{
		int t;
		t=a[j];
		a[j]=a[j+1];
		a[j+1]=t;
	}
	printf("\n after :");
	for(i=0;i<n;i++)
	printf("%3d",a[i]);
}
void main(){
	int a[100],n,i;
	printf("enter number of elements:");
	scanf("%d",&n);
	printf("enter elements :");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf(" before :");
	for(i=0;i<n;i++)
	printf("%3d",a[i]);
	bubble(a,n);
	
}
