#include <stdio.h>

int main() {
    int a,product=1;
    printf("Enter a number");

    scanf("%d",&a);

    for(int i=1;i<=a;i++){
        product = product * i;
       
    }
    printf("%d",product);
    return 0;
}