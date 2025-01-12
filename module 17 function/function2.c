#include <stdio.h>
int sum(int a, int b)
{
    int x = a + b;
   return x;
}
int main()
{
   int res1 = sum(4,5);

   printf("%d\n",res1);

   int res2 = sum(2,3);

   printf("%d",res2);
   
   return 0;
}