#include <stdio.h>

int main() {
   char s1[20];
 fgets(s1,sizeof(s1),stdin);
fputs(s1,stdout);
return 0;
}