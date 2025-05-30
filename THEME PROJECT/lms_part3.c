#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_BOOKS 100
#define TITLE_LENGTH 100
#define AUTHOR_LENGTH 100
#define CATEGORY_LENGTH 50

struct Author {
    char name[AUTHOR_LENGTH];
    int birth_year;
};

struct Book {
    char title[TITLE_LENGTH];
    struct Author author;
    int year;
    char category[CATEGORY_LENGTH];
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
    lib->books[lib->num_books].title[strcspn(lib->books[lib->num_books].title, "\n")] = '\0';

    printf("Enter author name: ");
    fgets(lib->books[lib->num_books].author.name, AUTHOR_LENGTH, stdin);
    lib->books[lib->num_books].author.name[strcspn(lib->books[lib->num_books].author.name, "\n")] = '\0';

    printf("Enter author birth year: ");
    scanf("%d", &lib->books[lib->num_books].author.birth_year);
    getchar();

    printf("Enter year of publication: ");
    scanf("%d", &lib->books[lib->num_books].year);
    getchar();

    printf("Enter category: ");
    fgets(lib->books[lib->num_books].category, CATEGORY_LENGTH, stdin);
    lib->books[lib->num_books].category[strcspn(lib->books[lib->num_books].category, "\n")] = '\0';

    lib->num_books++;
    printf("Book added successfully.\n");
}

void displayBooks(struct Library lib) {
    if (lib.num_books == 0) {
        printf("Library is empty.\n");
        return;
    }

    printf("\nLibrary Books:\n");
    printf("Title\t\tAuthor\t\tBirth Year\tYear\tCategory\n");
    for (int i = 0; i < lib.num_books; i++) {
        printf("%s\t\t%s\t\t%d\t\t%d\t%s\n", lib.books[i].title, lib.books[i].author.name,
            lib.books[i].author.birth_year, lib.books[i].year, lib.books[i].category);
    }
}

void searchBook(struct Library lib, char *title) {
    int found = 0;
    for (int i = 0; i < lib.num_books; i++) {
        if (strcmp(lib.books[i].title, title) == 0) {
            printf("Book found!\n");
            printf("Title: %s\n", lib.books[i].title);
            printf("Author: %s\n", lib.books[i].author.name);
            printf("Author Birth Year: %d\n", lib.books[i].author.birth_year);
            printf("Year of Publication: %d\n", lib.books[i].year);
            printf("Category: %s\n", lib.books[i].category);
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
                strcpy(lib->books[j].author.name, lib->books[j + 1].author.name);
                lib->books[j].author.birth_year = lib->books[j + 1].author.birth_year;
                lib->books[j].year = lib->books[j + 1].year;
                strcpy(lib->books[j].category, lib->books[j + 1].category);
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
        getchar();

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
                title[strcspn(title, "\n")] = '\0';
                searchBook(library, title);
                break;
            case 4:
                printf("Enter title to delete: ");
                fgets(title, TITLE_LENGTH, stdin);
                title[strcspn(title, "\n")] = '\0';
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