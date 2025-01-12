#include <stdio.h>

int main() {
    int a[] ={60,1,88,10,100};
    int x= 10;
    int size=sizeof(a)/sizeof(a[0]);
     for(int i=0;i<size;i++){
        if(a[i]==x){
            printf("%d\n",i);
            return i;
        }
    } 
    printf("%d",size);

}