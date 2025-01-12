#include <stdio.h>

int main() {
 int n,x,y;
 
 scanf("%d %d %d",&n,&x,&y);
 int arr[n];
for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
int count=0;
for(int i=0;i<n;i++){
    if(x<=arr[i] && arr[i]<=y){
count++;
    }
}
printf("%d",count);
return 0;
}