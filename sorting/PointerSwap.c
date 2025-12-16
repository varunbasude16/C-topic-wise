#include<stdio.H>
void swap(int* a, int* b){
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
void main()
{
	int a,b;
	printf("ener 2 numbers:");
	scanf("%d%d",&a,&b);
	printf ("before a=%d b=%d\n",a,b);
	swap(&a,&b);
	printf ("after a=%d b=%d",a,b);
}
