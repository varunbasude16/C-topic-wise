#include<stdio.h>
int main()
{
	int i,n,j,ch;
		printf("enter n value");
	 scanf("%d",&n) ;
	 printf("enter ch value");
	 scanf("%d",&ch) ;
	for(i=1;i<=n;i++) 
	 
	{
		for(j=1;j<=n+1-i;j++){
			printf("\t\n%c\t\n",ch);
			ch++;
		}
		
		printf("\n");
	}
}
