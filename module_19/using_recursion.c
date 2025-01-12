#include <stdio.h>
void print(int x){
    if(x == 0){
        return;
    }
    int digit = x % 10;
    print(x/10);
    printf("%d ",digit); 
}
int main()
{
int n;
scanf("%d",&n);
if(n==0){
    printf("0");
}
else{
    print(n);
}

    return 0;
}