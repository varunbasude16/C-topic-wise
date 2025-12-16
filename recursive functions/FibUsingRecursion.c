#include<stdio.h>
int fib(int n){
	if(n==1||n==0)
	return n;
	else 
	return fib(n-1)+fib(n-2);
}
void main()
{
	int n,g;
	printf("enter n:");
	scanf("%d",&g);
	for(n=0;n<g;n++)
	printf(" %d",fib(n));
}
