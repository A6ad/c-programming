#include <stdio.h>
#include <string.h>
int main()
{
int t;
scanf("%d",&t);
while(t--){

    char str[100];
    scanf("%s",str);
    int length = strlen(str);

    if(length>10){
        char first = str[0];
        char last = str[length-1];
        int  between = length - 2;
        printf("%c%d%c\n",first,between,last);
    }
    else {
        printf("%s\n",str);
    }
}
   
}