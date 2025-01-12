#include <stdio.h>

int main() {
    int population = 10000000000;// এটি একটি 32 বিটের int এর সীমার চেয়ে বেশি


// এই মানটি int ভেরিয়েবলে সঠিকভাবে store হবে না এবং অপ্রত্যাশিত মান দেখা দিতে পারে।
printf("population: %d\n", population);

    return 0;
}