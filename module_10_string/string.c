#include <stdio.h>

int main() {
 char s[]="Asad";
 printf("%s\n",s);
 printf("%c\n",s[1]);


char s1[16];
scanf("%[^\n]s",&s1);  //^\n means "read until a newline character (\n) is encountered."
printf("%s\n",s1);
getchar(); //to consume newline

fgets(s1,sizeof(s1),stdin); //fgets adds a newline("\n") automatically after input
printf("%s",s1);

return 0;
}