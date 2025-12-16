#include<stdio.h>
int main()
{
	int i,n,even=0,odd=0,sub[100];
	printf("Enter size of array\n");
	scanf("%d",&n);
	printf("enter array values\n");
	for(i=0;i<n;i++);{
	scanf("%d",&sub[i]);
	}
	for (i=0;i<n;i++){
		if(sub[i]%2==0)
		even++;
		else 
		odd++;
	}
	
	printf("even=%d",even);
	return 0;
}
