//summation using dynamic array and,
// using pointer to sum 

#include <stdio.h>
#include<stdlib.h>
int main()
{
int n;
scanf("%d",&n);

int *a = (int *)malloc(n*sizeof(int));

if(a == NULL){
   return 1;
}
for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
}

long long sum = 0;
int *ptr = a;
for(int i=0;i<n;i++){
    sum +=abs( *(ptr+i));
}
printf("%lld",sum);
free(a);
}