#include <stdio.h>

int main() {
    int x=10;
    for(int i=1;i<=x;i++){
        if((i % 3 == 0) || (i % 5 == 0) ){
            printf("%d yes",i);
            printf("\n");
        }
        else {
            printf("%d No",i);
            printf("\n");
        }
    }
    return 0;
}