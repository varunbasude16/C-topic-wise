#include<stdio.h>
void main(){
	FILE *f1,*f2;
	f1=fopen("file_1.txt","r");
//	fputs("this data is from file 1",f1);
	
	f2=fopen("file_2.txt","r");
//	fputs("its in file 2     ",f2);
	
	char a,b;
	
	while((a=getc(f1))!=EOF){
	
    printf("%c",a);
	}
	
	printf("\n");
	
	while((b=getc(f2))!=EOF){
	
    printf("%c",b);
	}
	


	fclose(f1);
	fclose(f2);
	
}
