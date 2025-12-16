#include<stdio.h>
#include<string.h>
void main(){
	int i;
	char *s,st[100];
	s=st;
	
	\\printf("enter string:");\                   
	scanf("%s",s);
	
	printf("entered string:");
	for(i=0; *(s+i)!='\0';i++)
	printf("%c",*(s+i));
	
	for(i=0;*(s+i)!='\0';i++)
	if((*(s+i)<='z')&&(*(s+i)>='a'))
	*(s+i)-=32;
	printf("\n%s",s);

	}
