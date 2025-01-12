#include <stdio.h>

long long  factorial(int x){
    if(x==0){
        return 1;
    }


    return x * factorial(x-1);
}

int main()
{
    int n;
    scanf("%d",&n);
   printf("%lld\n",factorial(n));


    return 0;
}