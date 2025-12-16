#include<stdio.H>
void swap(int* a, int* b){
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
void Bsort(int*a, int n){
	int i,j;
	for(i=0;i<n-1;i++)
	for(j=0;j<n-1-i;j++)
	if (*(a+j)>*(a+j+1))
	swap(a+j,a+j+1);
	
}
void main()
{
	int a[100],n,i,j;
	printf("enter  number of elements :");
	scanf("%d",&n);
	printf ("Enter elements: \n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	
	printf ("before elements: \n");
	for(i=0;i<n;i++)
	printf("%3d",a[i]);
	
	Bsort(a,n);
	
	printf ("\nafter elements: \n");
	for(i=0;i<n;i++)
	printf("%3d",a[i]);
	
}
