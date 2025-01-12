#include <stdio.h>

int main() {
 int n,t,i,total_time=0,book_count=0;
 scanf("%d %d",&n,&t);

 int times[n];
 for(int i=0;i<n;i++){
    scanf("%d",&times[i]);
 }
for(int i=0;i<n;i++){
    if(total_time+times[i]<=t){
        total_time+=times[i];
        book_count++;
    }else{
        break;
    }
}
printf("%d\n",book_count);
return 0;
}