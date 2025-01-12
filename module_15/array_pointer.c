#include <stdio.h>

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int *p = arr;
    printf("%d %d\n",&arr[0],p);
    printf("%d\n",(p+1));
    char ch ='a';
    char *a = &ch;
    printf("%d\n",a);
    printf("%d",a+1);
        return 0;
}