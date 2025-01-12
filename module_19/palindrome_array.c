#include <stdio.h>

int ispalindrome(int *arr,int i,int j){
    if(i>=j){
        return 1;
    }    
    return arr[i]==arr[j] && ispalindrome(arr,i+1,j-1);

}  

int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
   if( ispalindrome(arr,0,n-1)){
    printf("yes\n");
   }
   else{
    printf("no\n");
   }
    return 0;
}