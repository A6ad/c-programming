#include <stdio.h>
void funn(int x,int n)
{

    if (x > n)
    {
        return;
    }
    printf("%d\n",x);
   funn(x+1,n);
}
int main()
{
    
    funn(1,5);
   
    return 0;
}