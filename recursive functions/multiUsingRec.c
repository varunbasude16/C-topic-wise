#include<stdio.h>
int  m(int a,int b){
	if(b==1)
	return a;
	else 
	return a+m(a,b-1);
}
void main()
{
	int n,b;
	printf("enter a b:");
	scanf("%d%d",&n,&b);
//	for(n=0;n<g;n++)
	printf(" %d",m(n,b));
}n
