#include <stdio.h>

int main() {
 int t;
 scanf("%d",&t);
 while(t--){
    int m,a,b,c;
    scanf("%d %d %d %d",&m,&a,&b,&c);
    int multi = a*b*c;
    if(multi == 0){
     if( m == 0){
        printf("0\n");
        }
     else{
        printf("-1\n");
    }
    }
    else{
        if( m % multi ==0){
            printf("%d\n",m/multi);
        }
        else{
            printf("-1\n");
        }
    }
 }
return 0;
}