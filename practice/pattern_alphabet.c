#include <stdio.h>

int main() 
{
    char x='A';
    for(int i=1;i<=5;i++){
        for(int j=1;j<=i;j++){
            printf("%c",x);
         
        }
           x++;
        printf("\n");
    }
    return 0;
}