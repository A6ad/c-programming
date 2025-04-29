#include <stdio.h>
void modify(int *x)
{
    *x =*x + 10;
    printf("X is : %d",*x);
}
int main() {
    int a = 5;
    modify(&a);
    printf("a is : %d",a);
    return 0;
}