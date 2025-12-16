#include <stdio.h>
int main()
{
  int a;
  printf("Enter grade of student \n");
  scanf("%d",&a);
  if(a>=90)
  printf("A grade\n");
  else if((a>=80)&&(a<90))
  printf("B grade\n");
  else if((a>=70)&&(a<80))
  printf("C grade");
  else if((a>=60)&&(a<70))
  printf("D grade \n");
  else if((a>=50)&&(a<60))
  printf("E grade \n");
  else
  printf("Failllllll, wasted \n");
  return 0;
}
