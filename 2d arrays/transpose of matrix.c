#include<stdio.h>
int main()
{
	int i,j;
	int a[3][3];
	printf("Enter 3x3 matrix : \n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++)
		scanf("%d",&a[i][j]);
	}
	printf("Transpose  matrix is: \n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%3d",&a[j][i]);
		}
		printf("\n");
	}
	return 0;
}
	
	
