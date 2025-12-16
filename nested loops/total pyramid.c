#include<stdio.h>
int main()
{
	int i,j,k=1,count=1;
	for(i=1;i<=4;i++)
	{
		for (k=1;k<=4-i;k++)
		printf(" ");
		for(j=1;j<=count;j++){
			printf("*");
		}
		count=count+2;
		printf("\n");
	}
}
