#include <stdio.h>

int main() {
    int sum=0,n;
    float average;
    printf("enter 10 numbers :");

    for(int i=1;i<=10;i++){
        scanf("%d",&n);
    sum=sum+n;
    }

    printf("%d\n",sum);
    average=sum/10;
    
    printf("%f",average);
    return 0;
}