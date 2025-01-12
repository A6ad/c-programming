#include <stdio.h>
#include <string.h>
int main() {
 char str[20]="abcde fgh";
 int length;

 
//  for(int i=0;str[i] != '\0';i++){
//     length++;
//  }
//  printf("%d",length);
 printf("\n");

  length=strlen(str);
printf("%d",length);
return 0;
}