#include <stdio.h>
int main()
{
  char A;
  printf("Enter a samll alphabet \n");
  scanf("%c",&A);
  if((A=='a')||(A=='e')||(A=='i')||(A=='o')||(A=='u'))
  printf("It is a vowel \n");
  else 
  printf("consonent \n");
  return 0;
}
