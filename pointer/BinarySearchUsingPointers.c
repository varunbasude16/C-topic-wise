#include<stdio.h>
int i,j;
swap(int *a,int*b){
	int temp=*a;
	*a=*b;
	*b=temp;
}
sort(int* a, int n)
{
	int min;
	for(i=0;i<n-1;i++)
	{
		min=i;
		for(j=i+1;j<n;j++)
		if (*(a+min)>*(a+j))
		min=j;
		if (min!=i)
		swap((a+min),(a+i));
	}
}
int Bsearch(int *a,int n,int g){
	int mid, l,h;
	l=0,h=n-1;
	while(l<=h){
	mid=(l+h)/2;
	if (*(a+mid)==g)
	return mid;
	if(*(a+mid)>g)
	h=mid-1;
	else 
	l=mid +1;
    }
    if(l>h)
    return -1;
	
}
void main()
{
	int a[100],n,g;
	printf("enter number of elements\n");
	scanf("%d",&n);
	printf("enter elements\n");
	for(i=0;i<n;i++)
 	scanf("%d",a+i);
 	
 	sort(a,n);
 	printf("sorted elements \n");
 	for(i=0;i<n;i++)
 	printf("%3d",a[i]);
 	
 	while(g!=-1){
	 
	 printf ("\nenter key :");
 	scanf("%d",&g);
 	if(Bsearch(a,n,g)!=-1)
 	printf("found at postion %d",Bsearch(a,n,g));
 	else 
 	printf("not found ");
 	}
 	
}
