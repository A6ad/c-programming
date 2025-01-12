#include <stdio.h>

int main()
{
int arr[30]={26,25,12,3,4,4,3,3,3,3};
int f[30]={0};
for(int i=0;i<30;i++){
    f[arr[i]] += 1;
}
for(int i=1;i<30;i++){
    if(f[i]>=1){
    printf(" %d %d\n",i,f[i]);
      }
   }
    return 0;
}