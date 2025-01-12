#include <stdio.h>

int main() {
 int a,b,c;
 char q,s;
 scanf("%d %c %d %c %d",&a,&s,&b,&q,&c);
 if(s == '+'){
    if(a+b==c){
        printf("Right\n");
    }
    else {
        printf("%d + %d = %d\n",a,b,q,a+b);
    }
 }
 if( s =='-'){
    if(a-b==c){
printf("Right");
    }
    else {
        printf("%d - %d = %d\n",a,b,q,a-b);
    }
 }
 if( s=='*'){
    if(a*b==c){
        printf("Right\n");
    }
    else{
        printf("%d * %d = %d\n",a,b,q,a*b);
    }
 }
return 0;
}