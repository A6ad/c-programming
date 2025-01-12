#include <stdio.h>

int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    int arr[n];
    for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
    }
int f[100001]={0};
for(int i=0;i<n;i++){
    f[arr[i]] += 1;
}
for(int i=1;i<=m;i++){
    printf("%d\n",f[i]);
}
    return 0;
}