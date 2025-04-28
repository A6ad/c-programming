#include <stdio.h>

int main() {
    char ch;

    printf("Enter text (press 'q' to quit):\n");
    while (1) {
        ch = getchar();  // Read one character
        getchar();
        if (ch == 'q')   // Stop if 'q' is pressed
            break;
        putchar(ch);     // Print the character
    }

    return 0;
}
