#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

int main(int argc, char const *argv[])
{
    struct Node *head = NULL;

    // Create a new node
    struct Node *newData = (struct Node *)malloc(sizeof(struct Node));
    newData->data = 5;

    newData->next = head;
    head = newData;

    // Create a 2nd node
    struct Node *newData2 = (struct Node *)malloc(sizeof(struct Node));
    newData2->data = 7;

    newData2->next = head;
    head = newData2;

    // Traverse the Linked-list
    struct Node *current = head;
    while (current != NULL)
    {
        printf("%d ", current->data);
        current = current->next;
    }

    return 0;
}
