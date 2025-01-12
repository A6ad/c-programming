#include <stdio.h>

int main() {
    for(int i=5;i>=1;i--){
        for(int j=i;j>=1;j--){          //outer loop tells how many lines i will print
            printf("%d ",j);            //inner loop prints what i wanted to print in each line
        }
        printf("\n");
    }
    return 0;
}