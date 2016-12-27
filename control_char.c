#include <stdio.h>
int main(void)
{
  printf("The controller char test\n");
  int in,i;
  printf("Input choice\n");
  printf("\r 1.\\b \n 2.\\f \n 3.\\n \n 4.\\r \n 5.\\t \n 6.\\v \n");
  for(i=0;i<10;i++)
  {
    printf("hello,world%d\n",i);
  }
  scanf("%d",&in);
  switch(in)
  {
      case 1:
        printf("\b");
        break;
      case 2:
        printf("\f");
        break;
      case 3:
        printf("\n");
        break;
      case 4:
        printf("\r");
        break;
      case 5:
        printf("\t");
        break;
      case 6:
        printf("\v");
        break;
  }
  return 0;
}
