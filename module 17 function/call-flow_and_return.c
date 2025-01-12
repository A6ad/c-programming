#include <stdio.h>
void func2(){
    printf("inside func2\n");
}
void func1(){
    printf("before function call(inside func1)\n");
    func2();
    printf("after function call (inside func1)\n");
}
int main() {
 printf("before main function\n");
 func1();
 printf("after main function\n");
return 0;
}