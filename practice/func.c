#include <stdio.h>

void swap(int x,int y)
{
  int temp = x;
  x = y;
  y = temp;
  printf("%d %d",x,y);
}
int main()
{

  swap(3,2);

  return 0;
}