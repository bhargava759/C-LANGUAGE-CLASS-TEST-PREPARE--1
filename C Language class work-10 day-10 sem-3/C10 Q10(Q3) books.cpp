#include <stdio.h>
struct book {
   char title[50];
   char author[50];
   char subject[100];
   int book_id;
};
void printBook(struct book b);
int main() {
   int num_books;
   printf("Enter the number of books: ");
   scanf("%d", &num_books);
   struct book books[num_books];
   for (int i = 0; i < num_books; i++) {
      printf("\nEnter details for Book %d:\n", i+1);
      printf("Title: ");
      scanf(" %[^\n]%*c", books[i].title);
      printf("Author: ");
      scanf(" %[^\n]%*c", books[i].author);
      printf("Subject: ");
      scanf(" %[^\n]%*c", books[i].subject);
      printf("Book ID: ");
      scanf("%d", &books[i].book_id);
   }
   printf("\n");
   for (int i = 0; i < num_books; i++) {
      printf("Book %d:\n", i+1);
      printBook(books[i]);
      printf("\n");
   }
   return 0;
}
void printBook(struct book b) {
   printf("Title: %s\n", b.title);
   printf("Author: %s\n", b.author);
   printf("Subject: %s\n", b.subject);
   printf("Book ID: %d\n", b.book_id);
}

