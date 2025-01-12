#include <stdio.h>

int main() {
for(int i=1;i<=5;i++){
    for(int j=5;j>=i;j--){      //j=5;j>=i;j=-- and the pattern will change        
    printf("%d",j);
    }
    printf("\n");
}
return 0;
}
