#include <stdio.h>
int a[1000];
int main() {
 int n;
 scanf("%d",&n);
 for(int i=0;i<n;i++){
    scanf("%d",&a[i]);  // aarray input
 }

 for(int i=0,j=n-1;i<=j;i++,j--){
    int temp=a[i];
    a[i]=a[j];                //operation
    a[j]=temp;
     }

     for(int i=0;i<n;i++){
        printf("%d ",a[i]);
     }
return 0;
}