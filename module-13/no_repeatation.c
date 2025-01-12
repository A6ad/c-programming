#include <stdio.h>

int main() {
 

int n;
scanf("%d",&n);
int arr[n];
for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
int f[1000001]={0};

for(int i=0;i<n;i++){
    f[arr[i]] += 1;
}

int count =0;
for(int i=1;i<100000;i++){
    if(f[i]==1){
        count++;
    }
}
printf("%d\n",count);
}