#include <stdio.h>
#include<string.h>
int main()
{
    char s[50], n[50];
    scanf("%s %s", &s, &n);
    int len_s = strlen(s);
    int len_n = strlen(n);
    int length = len_s;
    char final[100];
    int k=0;          //for tracking final string
    int min_len ;

    if(len_s<len_n){
      min_len = len_s;  
    }
    else{
       min_len = len_n;
    }

for(int i=0;i<min_len;i++){
        final[k++] = s[i];
        final[k++] = n[i];
}

for(int i=min_len ; i<len_s ;i++){
        final[k++]= s[i];
}
for(int i = min_len ;i<len_n;i++){
        final[k++]=n[i];
}
final[k] ='\0';

printf("%s\n",final);
        return 0;
}