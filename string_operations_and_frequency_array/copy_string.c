#include <stdio.h>
#include<string.h>
int main() {
 char a[10];
 char b[10]="abcdef";

//  int length = strlen(b);
//  for(int i=0;i<length;i++){
//     a[i]=b[i];
//  }

//  a[length]= '\0';

// printf("%s %s",a,b);
strcpy(a,b);
printf("%s %s",a,b); // strcpy(destination,source)
return 0;
}