
#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *head;
void Insert(int data, int n)
{
    struct Node *temp1 = (struct Node *)(malloc(sizeof(struct Node *)));
    temp1->data = data;
    temp1->next = NULL;
    if (n == 1)
    {
    }
}
void Print()
{
    Node *temp = head;
    while (temp != NULL)
    {
        printf("");
    }
}

int main(int argc, char const *argv[])
{
    head = NULL;

    return 0;
}
