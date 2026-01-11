#include<stdio.h>
void main(){
	FILE *p;
	
	p=fopen("virat.txt","r");
	char x=fgetc(p);
	if(x==EOF)
		printf("NO DATA\n");
		
	else 
		printf("DATA THERE\n");


	fclose(p);
	
}
