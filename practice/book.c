#include <stdio.h>

int main() {
    int n, t, i, total_time = 0, book_count = 0;
    
    // Input number of books and available time
    scanf("%d %d", &n, &t);
    
    int times[n];
    
    // Input the time required to finish each book
    for (i = 0; i < n; i++) {
        scanf("%d", &times[i]);
    }
    
    // Loop through the array of book times and calculate total time
    for (i = 0; i < n; i++) {
        if (total_time + times[i] <= t) {
            total_time += times[i];  // Add book's time to total time
            book_count++;            // Increment the count of books
        } else {
            break;  // Stop if adding this book exceeds available time
        }
    }
    
    // Output the number of books that can be read
    printf("%d\n", book_count);
    
    return 0;
}
