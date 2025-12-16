#include<stdio.h>
void palindrome(int *p){
	int temp=*p,rem,sum=0,i;
	while(*p!=0){
		rem=*p%10;
		sum=(sum*10)+ rem;
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
	
	palindrome(p);
	
}
