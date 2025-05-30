#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_BOOKS 100
#define TITLE_LENGTH 100
#define AUTHOR_LENGTH 100

struct Book {
    char title[TITLE_LENGTH];
    char author[AUTHOR_LENGTH];
    int year;
};

struct Library {
    struct Book books[MAX_BOOKS];
    int num_books;
};

void addBook(struct Library *lib) {
    if (lib->num_books >= MAX_BOOKS) {
        printf("Library is full, cannot add more books.\n");
        return;
    }

    printf("Enter book title: ");
    fgets(lib->books[lib->num_books].title, TITLE_LENGTH, stdin);
    lib->books[lib->num_books].title[strcspn(lib->books[lib->num_books].title, "\n")] = 0; // remove newline character
    printf("Enter author: ");
    fgets(lib->books[lib->num_books].author, AUTHOR_LENGTH, stdin);
    lib->books[lib->num_books].author[strcspn(lib->books[lib->num_books].author, "\n")] = 0; // remove newline character
    printf("Enter year: ");
    scanf("%d", &lib->books[lib->num_books].year);
    getchar(); // consume newline character left by scanf

    lib->num_books++;
    printf("Book added successfully.\n");
}

void displayBooks(struct Library lib) {
    printf("\nLibrary Books:\n");
    printf("Title\t\tAuthor\t\tYear\n");
    for (int i = 0; i < lib.num_books; i++) {
        printf("%s\t\t%s\t\t%d\n", lib.books[i].title, lib.books[i].author, lib.books[i].year);
    }
}

void searchBook(struct Library lib, char *title) {
    int found = 0;
    for (int i = 0; i < lib.num_books; i++) {
        if (strcmp(lib.books[i].title, title) == 0) {
            printf("Book found!\n");
            printf("Title: %s\n", lib.books[i].title);
            printf("Author: %s\n", lib.books[i].author);
            printf("Year: %d\n", lib.books[i].year);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Book not found.\n");
    }
}

void deleteBook(struct Library *lib, char *title) {
    int found = 0;
    for (int i = 0; i < lib->num_books; i++) {
        if (strcmp(lib->books[i].title, title) == 0) {
            for (int j = i; j < lib->num_books - 1; j++) {
                strcpy(lib->books[j].title, lib->books[j + 1].title);
                strcpy(lib->books[j].author, lib->books[j + 1].author);
                lib->books[j].year = lib->books[j + 1].year;
            }
            lib->num_books--;
            printf("Book deleted successfully.\n");
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Book not found.\n");
    }
}

int main() {
    struct Library library;
    library.num_books = 0;
    int choice;
    char title[TITLE_LENGTH];

    do {
        printf("\nLibrary Management System\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Search Book\n");
        printf("4. Delete Book\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); // consume newline character left by scanf

        switch (choice) {
            case 1:
                addBook(&library);
                break;
            case 2:
                displayBooks(library);
                break;
            case 3:
                printf("Enter title to search: ");
                fgets(title, TITLE_LENGTH, stdin);
                title[strcspn(title, "\n")] = 0; // remove newline character
                searchBook(library, title);
                break;
            case 4:
                printf("Enter title to delete: ");
                fgets(title, TITLE_LENGTH, stdin);
                title[strcspn(title, "\n")] = 0; // remove newline character
                deleteBook(&library, title);
                break;
            case 0:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 0);

    return 0;
}