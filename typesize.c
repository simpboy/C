#include <stdio.h>
int main(void)
{
  /*c99 为类型大小提供了一个%zd说明符*/
  printf("Type int has a size of %u bytes. \n",sizeof(int));
  printf("Type char has a size of %u bytes. \n",sizeof(char));
  printf("Type long has a size of %u bytes. \n",sizeof(long));
  printf("Type double has a size of %u bytes. \n",sizeof(double));
  return 0;
}
