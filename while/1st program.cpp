#include <stdio.h>
#include <limits.h>


int main()
{
 char ch;
 
 printf("enter a character:");
 scanf("%c",&ch);
 
 printf("you entered:%c\n",ch);
 printf("ASCII value:%d\n",ch);
 printf("size of data type:%zu\n",sizeof(ch));
 printf("address of variable:5d\n", &ch);
 printf("next variable address:5d\n", (&ch+1));
printf("CHAR_MIN:%d,CHAR_MAX:%d\n",CHAR_MIN,CHAR_MAX);

return 0;
}
