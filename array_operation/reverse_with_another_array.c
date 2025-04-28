#include <stdio.h>
int a[1000];
int b[1000];
int main() {
    int length;
    printf("enter length\n");
    scanf("%d",&length);
   for(int i=0;i<length;i++){
    scanf("%d",&a[i]);
   }



   for(int i=0,j=length-1;i<length;i++,j--){
    b[j]=a[i];                                 //keeping a's element at b in reverse order
   }

for(int i=0;i<length;i++){
  a[i]=b[i];                                //now that b is reverse,keep b's element in a[]
}                                           // 

   for(int i=0;i<length;i++){
    printf("%d ",a[i]);
   }
   printf("\n");
//    for(int i=0;i<length;i++){
//     printf("%d ",b[i]);
//    }
   

return 0;
}