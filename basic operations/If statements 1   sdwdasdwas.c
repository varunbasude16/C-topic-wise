#include<stdio.h>
int main()
{
	int num,de,div;
	printf("enter numarator and denominator value\n");
	scanf("%d%d",&num,&de);
	if (de!=0)
	{
		div=num/de;
		printf("divsion = %d",div);
	}
	else 
	printf("enter a non-zero denominator again\n");
	scanf("%d",&de);
	div=num/de;
	printf("divsion = %d",div);
	return 0;
}
