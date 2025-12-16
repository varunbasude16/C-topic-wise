#include<stdio.h>
int maiin()
{
	int num,de,div;
	printf("enter numarator and denominator value\n");
	scanf("%d%d",&num,&de);
	if (de!=0)
	{
		div=num/de;
		printf("divsion = %d",div);
	}
}
