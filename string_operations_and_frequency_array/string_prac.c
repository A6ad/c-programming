#include <stdio.h>
#include <string.h>
int main()
{
    char s[20] = "hello all";
    char s1[20] = "string adding";
int len_a = strlen(s);
    int length = strlen(s)+strlen(s1);
    printf("%d\n", len_a);
     for(int i=len_a,j=0;i<length;i++,j++){
        s[i]=s1[j];
     }
     printf("%s",s);
    return 0;
}