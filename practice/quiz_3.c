#include <stdio.h>

int main() {
    int i=-3;
    while(i<0){
        for(int i=0;i<5;i++){
            printf("#");
        }
        i--;
    }
    return 0;
}