#include <stdio.h>

int main()
{
    int arr[10] = {1,2,3,4,5,6,7,8,9,1};
    int f[100] = {0};
    for (int i = 0; i < 10; i++)
    {
        f[arr[i]] += 1;
    }
    for (int i = 1; i <= 10; i++)
    { 
        printf("%d %d\n",i,f[i]);
    
    }
    return 0;
}