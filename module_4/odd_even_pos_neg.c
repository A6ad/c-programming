#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int evenncount=0,oddcount=0,positivecount=0,negativecount=0;

 for(int i=0;i<n;i++){
    int x;
    scanf("%d",&x);

    if(x % 2 == 0){
        evenncount++;
    }
    else{
        oddcount++;
    }

    if(x>0){
        positivecount++;
    }
    else if(x<0){
        negativecount++;
    }
   
 }
    printf("Even: %d\n",evenncount);
    printf("Odd: %d\n",oddcount);
    printf("Positive: %d\n",positivecount);
    printf("Negative: %d\n",negativecount);



        return 0;
}