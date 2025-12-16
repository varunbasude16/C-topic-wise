#include<stdio.h>
int i,j;
int Lsearch(int *a,int n, int g){
	for (i=0;i<n;i++)
	if(g==*(a+i)){
		return i+1;
	}

	return -1;
	
}
void main()
{
	int a[100],n,g,flag=0;
	printf("enter  number of elements :");
	scanf("%d",&n);
	printf ("Enter elements: \n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	while(g!=-1){
	
	printf("\nEnter key(-1 to stop):");
	scanf("%d",&g);
	
	if (Lsearch(a,n,g)!=-1)
	printf("found at position %d\n\n\n",Lsearch(a,n,g));
	else
	printf("not found");
	}
}

