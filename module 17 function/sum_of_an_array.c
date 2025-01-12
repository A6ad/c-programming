#include <stdio.h>
int arr[10],sum;

void sum_of_index(int i,int n){
    if(i == n){
        return;
    }
    sum+=arr[i];
    sum_of_index(i+1,n);
}
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    sum=0;
    sum_of_index(0,n);
    printf("%d",sum);
    return 0;
}