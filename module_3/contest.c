#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// check the number is divisible or not
// if divisible print yes beside it 
// if not print no

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
    scanf("%d",&n);
    
    
    for(int i=1;i<=n;i++){
        printf("%d ",i);
        
                if(i % 5 == 0){
                    printf("Yes");
                    printf("\n");
                            }
                else{
            printf("No");
            printf("\n");
                    }
}
    
}
