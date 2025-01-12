#include <stdio.h>
#include<string.h>
int main() {
 char s[100];
 fgets(s,sizeof(s),stdin);
 s[strlen(s)-1] = '\0';    // replacing newline at the end of the input to null
 int len = strlen(s);
 int flag=1;
 for(int i=0,j=len-1;j>=i;i++,j--){
    if(s[i]!=s[j]){
       flag=0;
       break;
    }
  
 }
 if(flag){
    printf("yes");
 }
 else{
    printf("no");
 }
}