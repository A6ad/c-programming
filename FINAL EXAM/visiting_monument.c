#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
for(int tc=0;tc<t;tc++)
    {
        int n;
        scanf("%d", &n);
        for(int i=1;i<=n;i++){
            printf("%d ",i);
        }
     for(int i=n-1;i>0;i--){
        printf("%d ",i);
     }
     printf("\n");
    }
    return 0;
}