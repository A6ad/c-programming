#include <stdio.h>

int main() {
    int n=5;
for(int i=1;i<=n;i++){
    for(int j=n-i+1;j>=1;j--){
        printf("%d",j);
    }
    printf("\n");
}

return 0;
}
// oututs :
// 5 4 3 2 1 
// 4 3 2 1
// 3 2 1 
// 2 1 
// 1