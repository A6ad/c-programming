#include <stdio.h>

int main() {
    int sum=0;
    for(int i=1;i<=10;i++){
        sum=sum+i;
        printf("sum is:%d\n",sum);
    }
    printf("total sum: %d",sum);
    return 0;
}