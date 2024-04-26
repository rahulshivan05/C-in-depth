#include <stdio.h>
#include <stdlib.h>

typedef struct TreeNode
{
    int value;
    struct TreeNode *left;
    struct TreeNode *right;
} TreeNode;

void insert(TreeNode **root, int value)
{
    if (*root == NULL)
    {
        *root = (TreeNode *)malloc(sizeof(TreeNode));
        (*root)->value = value;
        (*root)->left = NULL;
        (*root)->right = NULL;
    }
    else if (value < (*root)->value)
    {
        insert(&((*root)->left), value);
    }
    else
    {
        insert(&((*root)->right), value);
    }
}

void printInorder(TreeNode *root)
{
    if (root != NULL)
    {
        printInorder(root->left);
        printf("%d ", root->value);
        printInorder(root->right);
    }
}

int main()
{
    TreeNode *root = NULL;
    insert(&root, 50);
    insert(&root, 30);
    insert(&root, 20);
    insert(&root, 40);
    insert(&root, 70);
    insert(&root, 60);
    insert(&root, 80);
    printInorder(root);
    return 0;
}
