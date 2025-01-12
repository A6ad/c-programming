#include <stdio.h>

void func(int *x,int n){
    for(int i=0;i<5;i++){
        printf("%d",*(x+i));
    }
    x[0]=100;
}
int main()   
{
int a[5]={1,2,3,4,5};
func(a,6);
printf("\n");
for(int i=0;i<5;i++){
    printf("%d ",a[i]);
}
    return 0;
}