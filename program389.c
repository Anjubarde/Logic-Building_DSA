#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef struct node
{
    int data;
    struct node *lchild;
    struct node *rchild;
}NODE, *PNODE, **PPNODE;

void Insert(PPNODE head, int no)
{
    PNODE newn = NULL;
    PNODE temp = NULL;

    newn = (PNODE)malloc(sizeof(NODE));
    newn->data = no;
    newn->lchild = NULL;
    newn->rchild = NULL;

    if(*head == NULL)   // Tree is empty
    {
        *head = newn;
    }
    else    // Tree contains atleast one node
    {
        temp = *head;

        while(1)
        {
            if(no > temp->data) // Greater
            {
                if(temp->rchild == NULL)
                {
                    temp->rchild = newn;
                    break;
                }
                temp = temp -> rchild;
            }
            else if(no < temp->data)    // Smaller
            {
                if(temp->lchild == NULL)
                {
                    temp->lchild = newn;
                    break;
                } 
                temp = temp -> lchild;
            }
            else if(no == temp->data)   // Identical
            {
                printf("Unable to insert as element is duplicate\n");
                free(newn);
                break;
            }
        }
    }
}

void Inorder(PNODE head)
{
    if(head != NULL)
    {
        Inorder(head->lchild);
        printf("%d\n",head->data);
        Inorder(head->rchild);
    }
}

void Preorder(PNODE head)
{
    if(head != NULL)
    {
        printf("%d\n",head->data);
        Preorder(head->lchild);
        Preorder(head->rchild);
    }
}

void Postorder(PNODE head)
{
    if(head != NULL)
    {
        Postorder(head->lchild);
        Postorder(head->rchild);
        printf("%d\n",head->data);
    }
}

bool Search(PNODE head, int no)
{
    bool bFlag = false;

    while(head != NULL)
    {
        if(no == head -> data)
        {
            bFlag = true;
            break;
        }
        else if(no > head->data)
        {
            head = head -> rchild;
        }
        else if(no < head->data)
        {
            head = head->lchild;
        }
    }
    return bFlag;
}

int main()
{
    PNODE first = NULL;
    bool bret = false;

    Insert(&first,51);
    Insert(&first,21);
    Insert(&first,101);
    
    printf("Inorder traversal \n");
    Inorder(first);

    printf("Preorder traversal \n");
    Preorder(first);
    
    printf("Postrder traversal \n");
    Postorder(first);

    bret = Search(first,111);
    if(bret == true)
    {
        printf("Element is present in BST\n");
    }
    else
    {
        printf("There is no such element in BST\n");
    }
    
    return 0;
}