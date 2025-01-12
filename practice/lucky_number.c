#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);

    int digit2=n/10;
    int digit1 = n % 10;
    

    // printf("%d\n",digit1);
    // printf("%d",digit2);
    if(digit1/digit2 ==0){
        printf("YES\n");
    }
    else if(digit2/digit1==0){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }

    
    return 0;
}