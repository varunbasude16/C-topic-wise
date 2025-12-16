#include<stdio.h>
int main()
{
	int i,n,a[100],G,k=0;
	printf("enter size of array\n");
	scanf("%d",&n);
	printf("enter array values\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("enter number to find\n");
	scanf("%d",&G);
	for(i=0;i<n;i++){
		if(a[i]==G){
			printf("its index is %d",i);
			k++;
		}
		
	}
	if(k!=1)
	printf("value not found\n");
	
	return 0;
}
