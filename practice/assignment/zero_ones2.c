#include <stdio.h>

int main() {
    int n,x;
    scanf("%d",&n);
    int arr[n];
    
  for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
  }  

  scanf("%d",&x);
  x=x-1;
if(arr[x]==0){
    arr[x]=1;
}
else if(arr[x]==1){
    arr[x]=0;
}
for(int i=0;i<n;i++){
    printf("%d",arr[i]);
}
return 0;
}