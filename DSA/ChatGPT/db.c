#include <stdio.h>
#include <string.h>

#define MAX_BOOKS 100

struct Book
{
    int id;
    char title[100];
    char author[100];
    int year;
};

struct Database
{
    struct Book books[MAX_BOOKS];
    int num_books;
};

void print_book(struct Book *book)
{
    printf("ID: %d\nTitle: %s\nAuthor: %s\nYear: %d\n\n", book->id, book->title, book->author, book->year);
}

void print_database(struct Database *db)
{
    printf("Database contains %d books:\n\n", db->num_books);
    for (int i = 0; i < db->num_books; i++)
    {
        print_book(&db->books[i]);
    }
}

void add_book(struct Database *db, struct Book *book)
{
    if (db->num_books == MAX_BOOKS)
    {
        printf("Database is full, cannot add book.\n");
        return;
    }
    db->books[db->num_books] = *book;
    db->num_books++;
}

void delete_book(struct Database *db, int id)
{
    for (int i = 0; i < db->num_books; i++)
    {
        if (db->books[i].id == id)
        {
            db->books[i] = db->books[db->num_books - 1];
            db->num_books--;
            printf("Book with ID %d deleted.\n", id);
            return;
        }
    }
    printf("Book with ID %d not found.\n", id);
}

struct Book *find_book(struct Database *db, int id)
{
    for (int i = 0; i < db->num_books; i++)
    {
        if (db->books[i].id == id)
        {
            return &db->books[i];
        }
    }
    return NULL;
}

int main()
{
    struct Database db = {0};
    struct Book book;
    char command;
    int id;

    while (1)
    {
        printf("Enter command (a/d/f/p/q): ");
        scanf(" %c", &command);

        switch (command)
        {
        case 'a':
            printf("Enter book ID: ");
            scanf("%d", &book.id);
            printf("Enter book title: ");
            scanf("%s", book.title);
            printf("Enter book author: ");
            scanf("%s", book.author);
            printf("Enter book year: ");
            scanf("%d", &book.year);
            add_book(&db, &book);
            break;
        case 'd':
            printf("Enter book ID to delete: ");
            scanf("%d", &id);
            delete_book(&db, id);
            break;
        case 'f':
            printf("Enter book ID to search: ");
            scanf("%d", &id);
            struct Book *result = find_book(&db, id);
            if (result == NULL)
            {
                printf("Book with ID %d not found.\n", id);
            }
            else
            {
                print_book(result);
            }
            break;
        case 'p':
            print_database(&db);
            break;
        case 'q':
            return 0;
        default:
            printf("Invalid command.\n");
            break;
        }
    }

    return 0;
}
