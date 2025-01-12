#include <stdio.h>

int main() {
 int t;
 scanf("%d",&t);
 for(int tc=0;tc<t;tc++){
    int n;
    scanf("%d",&n);
    long long fact=1;
    for(int i=1;i<=n;i++){
fact *=i;
    }
    printf("%lld\n",fact);
 }
return 0;
}