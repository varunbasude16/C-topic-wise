#include<stdio.h>
int main()
{
	int i,j,k;
	int a[3][3],b[3][3];
	printf("Enter matrix 1: \n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++)
		scanf("%d",&a[i][j]);
	}
	
	printf("Enter matrix 2: \n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++)
		scanf("%d",&b[i][j]);
	}
	
	printf("Sum of matrix is : \n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++)
		printf("%3d",(a[i][j]+b[i][j]));
		printf("\n");
	}
	return 0;
}
	
	
