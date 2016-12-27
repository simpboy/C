#include <stdio.h>
int main(void)
{
  float a,b,c;
  printf("Input a number，if the number is big enough,then wrong:");
  scanf("%f",&c);
  b = c+1.0;
  a = b-c;
  printf("If the number output is 1 ,then right: %f\n",a);
  return 0;
}
