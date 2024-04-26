#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
} node_t;

void insert(node_t **head, int data);
void delete(node_t **head, int data);
void print_list(node_t *head);

int main()
{
    node_t *head = NULL;

    // Insert elements into linked list
    insert(&head, 5);
    insert(&head, 10);
    insert(&head, 15);

    // Delete an element from linked list
    delete (&head, 10);

    // Print linked list
    print_list(head);

    // Free memory allocated for linked list
    while (head != NULL)
    {
        node_t *tmp = head;
        head = head->next;
        free(tmp);
    }

    return 0;
}

void insert(node_t **head, int data)
{
    node_t *new_node = (node_t *)malloc(sizeof(node_t));
    if (new_node == NULL)
    {
        fprintf(stderr, "Error: memory allocation failed\n");
        exit(EXIT_FAILURE);
    }
    new_node->data = data;
    new_node->next = *head;
    *head = new_node;
}

void delete(node_t **head, int data)
{
    node_t *prev = NULL;
    node_t *curr = *head;

    while (curr != NULL && curr->data != data)
    {
        prev = curr;
        curr = curr->next;
    }

    if (curr == NULL)
    {
        fprintf(stderr, "Error: element not found\n");
        exit(EXIT_FAILURE);
    }

    if (prev == NULL)
    {
        *head = curr->next;
    }
    else
    {
        prev->next = curr->next;
    }

    free(curr);
}

void print_list(node_t *head)
{
    node_t *curr = head;

    while (curr != NULL)
    {
        printf("%d ", curr->data);
        curr = curr->next;
    }
    printf("\n");
}
