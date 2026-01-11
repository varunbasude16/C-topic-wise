#include<stdio.h>
void main()
{
	FILE *f;
	f=fopen("file_1.txt","r");
	int count;
	char ch;
	while((ch=getc(f))!=EOF){
		
		printf("%c",ch);
		count++;
	}
	printf("\nnumber of characters in file 1 are: %d",count);
	fclose(f);
}
