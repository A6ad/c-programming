#include <stdio.h>
#include<string.h>

int main() {
 char s[10000001];
 scanf("%s",s);
 int f[26]={0};
 int len = strlen(s);

for(int i=0;i<len;i++){
    char ch = s[i];
    int index = ch - 'a';
    f[index]+=1;
}

for(int i=0;i<26;i++){
    if(f[i]>=1){
        printf("%c : %d\n",i+'a',f[i]);
    }
}
return 0;
}