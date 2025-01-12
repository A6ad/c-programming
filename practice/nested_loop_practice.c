#include <stdio.h>

int main() {
    for(int i=0;i<24;i++){
        for(int j=0;j<60;j++){
            printf("%d hour %d minute\n",i,j);
        }
    }
    return 0;
}
