#include <stdio.h>

int add()
{
    int a = 10, b = 40;
    printf("Function called ");
    int sum = a + b;
    return sum;
}
int main()
{
    printf("before\n");
    printf("%d\n", add());
    printf("after");
    return 0;
}