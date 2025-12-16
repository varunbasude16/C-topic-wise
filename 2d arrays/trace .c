#include<stdio.h>
int main()
{
	int i,j,sum=0;
	int a[3][3];
	printf("Enter matrix : \n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++)
		scanf("%d",&a[i][j]);
	}
	
	printf("trace is : \n");
	for(i=0;i<3;i++){
		sum= sum + a[i][i];
	}
	printf("%3d",sum);
	return 0;
}
	
	
