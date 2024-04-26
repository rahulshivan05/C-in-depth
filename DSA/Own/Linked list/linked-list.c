#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *createNode(int data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node *));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Insertation at the beggining of the Linked-list
void insert(struct Node **head, int data)
{
    struct Node *newNode = createNode(data);
    newNode->next = *head;
    *head = newNode;
}

// Deletion of Node
void deleteNode(struct Node **head, int data)
{
    struct Node *temp = *head;
    struct Node *prev = NULL;

    if (temp != NULL && temp->data == data)
    {
        *head = temp->next;
        free(temp);
        return;
    }

    while (temp != NULL && temp->data != data)
    {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL)
    {
        return;
    }

    prev->next = temp->next;
    free(temp);
}

// Traversal of the Linked-list
void printList(struct Node *head)
{
    while (head != NULL)
    {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}

// Entry point of the program
int main(int argc, char const *argv[])
{
    struct Node *head = NULL;
    insert(&head, 5);
    insert(&head, 3);
    insert(&head, 2);
    insert(&head, 55);
    insert(&head, 10);
    printList(head);

    deleteNode(&head, 2);
    printf("List after deletion: ");
    printList(head);
    return 0;
}
