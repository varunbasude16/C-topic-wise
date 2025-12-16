#include<stdio.h>
int fact(int* p){
	int i,f=1;
	for(i=1;i<=(*p);i++)
	f=f*i;
	
	return f;
}
void strong(int *p){
	int temp=*p,rem,sum=0,i;
	while(*p!=0){
		rem=*p%10;
		sum=sum+ fact(&rem);
		*p=*p/10;
	}
	if(sum==temp)
	printf("yes");
	else 
	printf("no");
	
}
void main(){
	int n,*p;
	p=&n;
	printf("Enter n:");
	scanf("%d", p);
	
	strong(p);
	
}
