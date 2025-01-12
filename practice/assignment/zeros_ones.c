#include <stdio.h>

int main() {
    int n,x,zerocount=0,onecount=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&x);
        if(x==0){
            zerocount++;
        }
        else if(x==1){
            onecount++;
        }
    }
printf("%d %d",zerocount,onecount);
}