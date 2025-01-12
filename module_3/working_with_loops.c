#include <stdio.h>

int main() {
    int n =10;
    for(char i=1;i<=n;i++){
        if(i%2==0){
            printf("%d even",i);
            printf("\n");
        }
        else{
            printf("%d odd",i);
             printf("\n");
        }
       
    }
    return 0;
}