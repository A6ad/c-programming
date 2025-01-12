#include <stdio.h>
int arr[1000];
int main() {
 int n=5;
 int arr[1000]={1,2,3,4,5};
 printf("Enter index: \n");

 int index;
 scanf("%d",&index);

for(int i = index; i<n-1;i++){
    arr[i]=arr[i+1];
}
n--;
for(int i=0;i<n ;i++){
    printf("%d",arr[i]);
}
return 0;
}