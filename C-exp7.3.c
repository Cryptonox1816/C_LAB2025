#include <stdio.h>

// Define the Book structure
typedef struct {
    int book_id;
    char title[100];
    char author[100];
    float price;
} Book;

// Function to print book details
void printBookDetails(Book b) {
    printf("\nBook Details:\n");
    printf("Book ID   : %d\n", b.book_id);
    printf("Title     : %s\n", b.title);
    printf("Author    : %s\n", b.author);
    printf("Price     : ₹%.2f\n", b.price);
}

int main() {
    Book myBook;

    // Input book details
    printf("Enter Book ID: ");
    scanf("%d", &myBook.book_id);

    printf("Enter Book Title: ");
    scanf(" %[^\n]", myBook.title);  // Read string with spaces

    printf("Enter Author Name: ");
    scanf(" %[^\n]", myBook.author);

    printf("Enter Book Price: ₹");
    scanf("%f", &myBook.price);

    // Pass structure to function
    printBookDetails(myBook);

    return 0;
}
