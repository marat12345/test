#include <stdio.h>
void swap(int *x, int *y)
  {
  int temp = *x;
  *x=*y;
  *y=temp;
  }
int main(void)
{
  int x= 22;
  int y= 50;

  printf("x is %i\n", x);
  printf("y is %i\n", y);

  swap(&x, &y);

  printf("x is %i\n", x);
  printf("y is %i\n", y);

}
