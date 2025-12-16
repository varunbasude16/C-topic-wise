#include <stdio.h>
int main()
{
  char k;
  printf("Enter the alphabet to check vowel or consonent \n");
  scanf("%c",&k);
  switch(k)
  {
  	case'a':
  	case'e':
  	case'i':
  	case'o':
  	case'u':printf("given alphabet is vowel \n");
  	break;
	default:printf("given alphabet is consonent \n");
  }

  return 0;
}
