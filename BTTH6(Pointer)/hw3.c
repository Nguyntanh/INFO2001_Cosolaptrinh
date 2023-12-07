#include <stdio.h>
#include <stdlib.h>

struct Book {
    char title[100];
    char author[100];
    float price;
};

int main() {
    int n;
    struct Book* books;
    printf("Enter the number of books: ");
    scanf("%d", &n);
    books = (struct Book*)malloc(n * sizeof(struct Book));
    if (books == NULL) {
        printf("Unable to allocate memory.\n");
        return 1;
    }
    printf("Enter book information:\n");
    for (int i = 0; i < n; i++) {
        printf("Book %d:\n", i + 1);
        printf("Book title: ");
        scanf("%s", books[i].title);
        printf("Author: ");
        scanf("%s", books[i].author);
        printf("Price: ");
        scanf("%f", &books[i].price);
    }
    printf("Book information:\n");
    for (int i = 0; i < n; i++) {
        printf("Book %d:\n", i + 1);
        printf("Book title: %s\n", books[i].title);
        printf("Author: %s\n", books[i].author);
        printf("Price: %.2f\n", books[i].price);
    }
    free(books);
    return 0;
}