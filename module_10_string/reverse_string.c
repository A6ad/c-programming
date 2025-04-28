#include <stdio.h>
#include <string.h>

void reverseString(char str[], int start, int end) {
    
    // Base condition to stop
    if (start >= end) return;
    
    // Swap characters at start and end
    char temp = str[start];
    str[start] = str[end];
    str[end] = temp;
    
    // Recursively call the function for the next pair
    reverseString(str, start + 1, end - 1);
}

int main() {
    char str[] = "Hello, Geek";
    int length = strlen(str);

    printf("Original String: %s\n", str);
    
    reverseString(str, 0, length - 1);
    printf("Reversed String: %s\n", str);
    return 0;
}
