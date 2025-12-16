#include <stdio.h>
int main()
{
	int i,length=0;
	char st[100];
	gets(st);
	for(i=0;st[i]!='\0'; i++){
		length++;
	}
	printf("%d",length);
	
	
	printf("\n reverse is :\n");
	
	for(i=length-1;i>=00;i--)
	print("%c",st[i]);
	return 0;
	
}
