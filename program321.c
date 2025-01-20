#include<stdio.h>
#include<stdlib.h>

struct node 
{
    int data;
    struct node *next;
    struct node *prev;          // $
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE head, int no)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;      // $

    if(*head == NULL)
    {
        *head = newn;
    }
    else 
    {
        newn->next = *head;
        *head = newn;
    }
}

void InsertLast(PPNODE head, int no)
{
    PNODE newn = NULL;
    PNODE temp = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;      // $

    if(*head == NULL)
    {
        *head = newn;
    }
    else 
    {
        temp = *head;

        while(temp->next != NULL)
        {
            temp = temp -> next;
        }

        temp->next = newn;
        newn->prev = temp;      // $
    }
}

void Display(PNODE head)
{
    printf("Elements of LinkedList are : \n");

    while(head != NULL)
    {
        printf("| %d | <=> ",head->data);
        head = head -> next;
    }
    printf("NULL\n");

}

int main()
{
    PNODE first = NULL;

    InsertFirst(&first,51);
    InsertFirst(&first,21);
    InsertFirst(&first,11);
    
    return 0;
}