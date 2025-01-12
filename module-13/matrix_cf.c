#include <stdio.h>
#include<math.h>
int main()
{
int n;
scanf("%d",&n);
int arr[n][n];
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        scanf("%d",&arr[i][j]);
    }
}
 
int main_diagonal =0,second_diagonal=0;
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        if (i==j){
            main_diagonal += arr[i][j];
        }
        if(i+j == n-1){
            second_diagonal += arr[i][j];
        }
    }
}
int diff = abs(main_diagonal - second_diagonal);
// if (diff<0){
//     diff = -1 * diff;
// }
printf("%d\n",diff);
    return 0;
}