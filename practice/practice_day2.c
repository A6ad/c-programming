#include <stdio.h>

int main() {
    int n;
    int even=0;
    scanf("%d",&n);
for(int i=1;i<=n;i++){
    if(i%2 == 0){
        printf("%d\n",i);
        even =1;
    }
}
  if(!even){
        printf("-1\n");
    }

    return 0;
}