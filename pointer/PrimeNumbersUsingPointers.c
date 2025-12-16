#include<stdio.h>
void prime(int *p){
	int f=0,i;
	for(i=1;i<=(*p);i++){
		if((*p)%i==0)
	      f++;
	}
	
	if(f==2)
	printf("yes");
	else 
	printf("no");
	
}
void main(){
	int n,*p;
	
	printf("Enter n:");
	scanf("%d",&n);
	p=&n;
	
	prime(p);
	
}
