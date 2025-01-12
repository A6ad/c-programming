#include <stdio.h>

int main() {
 int a,b;
 char s;
 scanf("%d %c %d",&a,&s,&b);
 //printf("%d %c %d",a,s,b);
 if(s=='>'){
   if(a>b){
    printf("Right\n");
   }
   else {
    printf("Wrong\n");
   }
 }
 else if(s == '<'){
    if(a<b){
printf("Right\n");
    }
    else {
        printf("Wrong\n");
    }
 
 }
 else{
   if(a==b){
    printf("Right");
   }
   else {
    printf("Wrong");
   }
 }
return 0;
}