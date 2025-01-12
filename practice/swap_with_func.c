#include <stdio.h>
void swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
   // printf("%d %d",*a,*b);
}
int main()
{
    int x=4;
    int y=5;
swap(&x,&y); 
printf("%d %d",x,y);
    return 0;
}