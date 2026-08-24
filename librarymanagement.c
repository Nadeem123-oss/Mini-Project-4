#include <stdio.h>

struct Book {
    int id;
    char name[50];
    char author[50];
    char date[20];
};

int main() {
    struct Book b[50];
    int n, i;

    printf("Enter number of books: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nBook %d\n", i + 1);

        printf("Enter Book ID: ");
        scanf("%d", &b[i].id);

        printf("Enter Book Name: ");
        scanf(" %[^\n]", b[i].name);

        printf("Enter Author: ");
        scanf(" %[^\n]", b[i].author);

        printf("Enter Date of Publishing: ");
        scanf(" %[^\n]", b[i].date);
    }

    printf("\n--- Library Books ---\n");

    for (i = 0; i < n; i++) {
        printf("\nBook ID: %d", b[i].id);
        printf("\nBook Name: %s", b[i].name);
        printf("\nAuthor: %s", b[i].author);
        printf("\nDate: %s\n", b[i].date);
    }

    return 0;
}
