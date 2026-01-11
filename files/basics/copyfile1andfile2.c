#include<stdio.h>
void main(){
	FILE *f1,*f2;
	f1=fopen("file_1.txt","r");
//	fputs("this data is from file 1",f1);
	
	f2=fopen("file_2.txt","w");
//	fputs("this data is from file 2",f2);
	
	char ch;
	
	while((ch=getc(f1))!=EOF){
	
	fputc(ch,f2);
	}
	
	


	fclose(f1);
	fclose(f2);
	
}
