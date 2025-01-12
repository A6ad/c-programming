#include <stdio.h>
#include<string.h>
int main()
{
    char s1[101],s2[101],s3[101];
    scanf("%s",s1);
    scanf("%s",s2);
    scanf("%s",s3);

int n=strlen(s1);
int operation =0;
for(int i=0;i<n;i++){
    if(s1[i] == s2[i] && s2[i]==s3[i]){
        continue;
    }
    else if(s1[i] == s2[i] || s2[i] == s3[i] || s1[i] == s3[i]){
        operation++;
    }
    else{
        operation +=2;
    }
}
printf("%d",operation);
    return 0;
}