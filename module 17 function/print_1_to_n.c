#include <stdio.h>

void fun(int x,int n){
    if(x>n){
        return;
    }

    printf("%d\n",x);
    printf("before function x = %d\n",x);
    fun(x+1,n);
    printf("after function x= %d\n",x);
}
int main()
{

fun(1,5);
    return 0;
}