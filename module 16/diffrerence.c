#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int a,b;
    scanf("%d %d",&a,&b);
    int *p1 = &a;
    int *p2 = &b;
    int diff = abs(*p1 - *p2);
    printf("%d",diff);
    return 0;
}