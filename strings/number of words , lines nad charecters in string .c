#include<stdio.h>
#include<string.h>
int main()
{
	int i,l=0,w=0;
	char st[30],sub[30];
	printf("enter string :\n");
	gets(st);
	
	for(i=0;st[i]!='\0';i++)
	{
		if((st[i]=='\n')||(st[i]==' ')||st[i]=='\t')
		w++;
		
		if(st[i]=='\n')
		l++;
	}
	printf("words= %d \nlines= %d \ncharecters= %d",w+1,l,i);
	return 0;
}

	

