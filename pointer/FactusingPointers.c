#include<stdio.h>
void fact(int* p){
	int i,f=1;
	for(i=1;i<=(*p);i++)
	f=f*i;
	printf("%d",f);
}
void main()
{
	int *p, n;
	p=&n;
	printf("enter n:");
	scanf("%d",p);
	fact(p);
}
