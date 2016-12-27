#include <stdio.h>
#include <inttypes.h>
#define PRID16 "d"
// Maybe,The complier is not support inttypes
int main(void)
{
  int16_t me16;

  me16 = 4593;
  printf("First,assume int16_t is short:");
  printf("me16 = %hd\n",me16);
  printf("Next,let's not make any assumpions.\n");
  printf("Instead,use a \"macro\" from inttypes.h:");
  printf("me16 = %"PRID16"\n",me16);
  return 0;
}
