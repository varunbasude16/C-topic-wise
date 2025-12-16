#include<stdio.h>
int i,j;
void swap(int* a, int* b){
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
void Ssort(int *a, int n){
	int min;
	for(i=0;i<n-1;i++){
		min=i;
		for(j=i+1;j<n;j++){
		if(*(a+min)>*(a+j))
		min=j;	
		}
	if(min!=i)
	swap((a+i),(a+min));
	}
}

void main()
{
	int a[100],n;
	printf("enter  number of elements :");
	scanf("%d",&n);
	printf ("Enter elements: \n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	
	printf ("before elements: \n");
	for(i=0;i<n;i++)
	printf("%3d",a[i]);
	
	Ssort(a,n);
	
	printf ("\nafter elements: \n");
	for(i=0;i<n;i++)
	printf("%3d",a[i]);
}
