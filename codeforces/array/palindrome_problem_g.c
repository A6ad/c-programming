#include <stdio.h>

int main() {
 int n;
 scanf("%d",&n);
int a[n];

for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
}
int ispalindrome = 0;
for(int i=0;i< n/2 ;i++){
    if(a[i]==a[n-1-i]){
        ispalindrome = 1;
        break;
    }
}
    if(ispalindrome){
        printf("YES\n");
    }
    else {
        printf("NO\n");
    }
}



