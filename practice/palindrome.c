#include <stdio.h>

int main() {int n=6;
 int arr[6]={1,2,3,3,2,1};
 for(int i=0,j=n-1;j>=i;i++,j--){
    if(arr[i]==arr[j]){
        printf("Same,");
 }
 else {
    printf("Not same, ");
 }
 }
}