// Linked List: Inserting a node at beginning

#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *head; // global variables, can be accessed anywhere

void Insert(int x)
{
    struct Node *temp = (Node *)(malloc(sizeof(struct Node)));
    temp->data = x;
    temp->next = head;
    head = temp;
}

void Print()
{
    struct Node *temp = head;
    printf("List is: ");
    while (temp != NULL)
    {
        printf(" %d", temp->data);
        temp = temp->data;
    }
    printf("\n");
}

int main(int argc, char const *argv[])
{
    int n = 0, x = 0;
    head = NULL; // empty list

    // Taking the number from the user
    printf("How many numbers?\n");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("ENter the numbers \n");
        scanf("%d", &x);
        Insert(x);
        Print();
    }

    return 0;
}
