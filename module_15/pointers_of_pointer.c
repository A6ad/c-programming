#include <stdio.h>

int main()
{
int a=5;  
int *x = &a;
int **y = &x; //**y means pointer of pointer

printf("%d %d\n",*y,&a); //*y means dereferencing y, 
//which gives the value stored in x.
 //Since x is a pointer to a, *y is the address of a.
 printf("%d",**y);
    return 0;
}