#include<stdio.h>
#include<stdlib.h>
void main(){
	FILE *p;
	
	p=fopen("create.txt","w");
	if(p==NULL)
	{
		printf("file error \n");
		exit(0);
	} 
	fclose(p);
	
}
