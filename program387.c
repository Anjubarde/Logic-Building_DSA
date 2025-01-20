#include<stdio.h>
#include<stdlib.h>

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

int main()
{
    PNODE first = NULL;

    Insert(&first,51);
    Insert(&first,21);
    Insert(&first,101);
    
    printf("Inorder traversal \n");
    Inorder(first);

    printf("Preorder traversal \n");
    Preorder(first);
    
    printf("Postrder traversal \n");
    Postorder(first);

    return 0;
}