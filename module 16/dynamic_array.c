#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    scanf("%d", &n);
    int *arr = (int *)malloc(sizeof(int));
    for (int i = 0; i < n; i++)
    {
        int num;
        scanf("%d", &num);
        arr = realloc(arr, (i + 1) * sizeof(int));
        arr[i] = num;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}