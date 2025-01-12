#include <stdio.h>
#include<string.h>
int main()
{
char s[1000000];
scanf("%s",&s);
int len = strlen(s);
int num ;
int sum =0;
for(int i=0;i<len;i++){
    num = s[i] - '0';
    sum = sum + num;
}
printf("%d",sum);
    return 0;
}