#include <stdio.h>

int main() {
 int n;
 scanf("%d",&n);
 int a[n];
 for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
 }
 int min=a[0];
 int min_pos=0,max_pos=0;
 for(int i=0;i<n;i++){
    if(a[i]<min){
        min=a[i];
        min_pos=i;
    }
 }


int max=a[0];
for(int i=0;i<n;i++){
    if(a[i]>max){
        max=a[i];
        max_pos = i;
    }
}
int temp=a[min_pos];
a[min_pos]=a[max_pos];
a[max_pos]=temp;
for(int =0;i<n;i++){
    printf("%d ",a[i]);
}
printf("\n");
return 0;
}