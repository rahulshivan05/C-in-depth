// Program that uses a function with no argumenst and no return values

#include <stdio.h>

void dispmenu(void)
{
    printf("1. Create database\n");
    printf("2. Insert new record\n");
    printf("3. Modify a record\n");
    printf("4. Delete a record\n");
    printf("5. Display all record\n");
    printf("6. Exit\n");
}

int main(int argc, char const *argv[])
{
    int choice = 0;
    dispmenu();
    printf("Enter your choice: ");
    scanf("%d", &choice);
    return 0;
}
