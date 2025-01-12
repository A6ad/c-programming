#include <stdio.h>

int main() {
int n;
scanf("%d",&n);
int a[n][n];
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        scanf("%d",&a[i][j]);
    }
}
int main_diagonal=0,second_diagonal=0;
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      if(i==j){
        main_diagonal += a[i][j];
      }
      if(i+j==n-1){
        second_diagonal += a[i][j];
      }
    }
}
int difference = abs(main_diagonal-second_diagonal);
printf("%d",difference);
}