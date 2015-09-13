#include "binary_search_tree.h"


void bst_create(BST_NODE *root)
{
    root = NULL;
}

void bst_insert(BST_NODE *root, int key)
{
    BST_NODE *new = NULL;
    BST_NODE *tmp = NULL;
    BST_NODE *ptr = root;

    new = (BST_NODE *)malloc(sizeof(BST_NODE));
    memset(new, 0, sizeof(BST_NODE));
    new->key = key;
    
    while (ptr != NULL)
    {
        tmp = ptr;
        if (new->key < ptr->key)
        {
            ptr = ptr->left;
        }
        else
        {
            ptr = ptr->right;
        }
    }

    new->p = tmp;

    if (tmp == NULL)
    {
        root = new;        
    }
    else if (new->key < tmp->key)
    {
        tmp->left = new;
    }
    else
    {
        tmp->right = new;
    }

    new = NULL;
    tmp = NULL;
    ptr = NULL;
}


void inorder_tree_walk(BST_NODE *ptr)
{
    if (ptr != NULL)
    {
        inorder_tree_walk(ptr->left);
        printf("%d  ", ptr->key);
        inorder_tree_walk(ptr->right);
    }
}

BST_NODE* iterative_tree_search(BST_NODE *root, key)
{
    BST_NODE *ptr = root;
    
    while ((ptr != NULL) && (k != ptr->key))
    {
        if (k < ptr->key)
        {
            ptr = ptr->left;
        }
        else
        {
            ptr = ptr->right;
        }
    }

    return ptr;
}

void transplant() // TO-DO




