#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
}NODE, *PNODE, **PPNODE;

void push(PPNODE head, int no) // InsertFirst
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));
    newn->data = no;
    newn->next = NULL;

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

int pop(PPNODE head)    // DeleteFirst
{
    int no = -1;
    PNODE temp = NULL;

    if(*head == NULL)   // Empty
    {
        printf("Stack is empty\n");
    }
    else if((*head) -> next == NULL)    // Single node
    {
        no = (*head)->data;
        free(*head);
        *head = NULL;
    }
    else        // More than one node
    {
        no = (*head)->data;
        temp = *head;
        *head = (*head) -> next;
        free(temp);
    }
    return no;
}

void Display(PNODE head)
{}

int Count(PNODE head)
{}

int main()
{
    PNODE first = NULL;
    int iRet = 0;

    push(&first,51);
    push(&first,21);
    push(&first,11);
    
    iRet = pop(&first);
    printf("Poped element is : %d\n",iRet);

    iRet = pop(&first);
    printf("Poped element is : %d\n",iRet);
    
    return 0;
}