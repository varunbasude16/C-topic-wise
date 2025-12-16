#include<stdio.h>
void table(int );
int main()
{
	int n;
	printf("enter n :");
	scanf("%d",&n);
	table(n);
	return 0;
}
void table(int n){
	int i;
	for(i=1;i<=10;i++)
	printf("%dx%d=%d\n",n,i,n*i);
}

