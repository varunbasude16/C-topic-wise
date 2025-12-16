#include<stdio.h>
int fact(int);
int main()
   {
   	int n,f;
   	printf("enter number");
   	scanf("%d",&n);
   	f=fact(n);
   	printf("%d",f);
   	return 0;
   }int fact(int x)
   {
   	int f=1,i;
   	for(i=1,i<x;i++)
   	f=f*i;
   	return f;
   }
