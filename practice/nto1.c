#include <stdio.h>
void func(int x){
    if(x==0){
        return;
    }
    printf("%d\n",x);
    func(x-1);
}
int main()
{
    func(10);
    return 0;
}

//print N to 1 using recursion