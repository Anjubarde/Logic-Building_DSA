#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE head, PPNODE tail, int no)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));
    newn->data = no;
    newn->next = NULL;

    if((*head == NULL) && (*tail == NULL))    // LL is empty
    {
        *head = newn;
        *tail = newn;
    }
    else
    {
        newn->next = *head;
        *head = newn;
    }
    (*tail) -> next = *head;
}

void InsertLast(PPNODE head, PPNODE tail, int no)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));
    newn->data = no;
    newn->next = NULL;

    if((*head == NULL) && (*tail == NULL))    // LL is empty
    {
        *head = newn;
        *tail = newn;
    }
    else
    {
        (*tail)->next = newn;
        *tail = newn;
    }
    (*tail) -> next = *head;
}

void InsertAtPos(PPNODE head, PPNODE tail, int no, int ipos){}

void DeleteFirst(PPNODE head, PPNODE tail)
{
    if((*head == NULL) && (*tail == NULL))
    {
        return;
    }
    else if(*head == *tail)
    {
        free(*head);
        *head = NULL;
        *tail = NULL;
    }
    else
    {
        *head = (*head) -> next;
        free((*tail)->next);
        (*tail)->next = *head;
    }
}

void DeleteLast(PPNODE head, PPNODE tail)
{
    if((*head == NULL) && (*tail == NULL))
    {
        return;
    }
    else if(*head == *tail)
    {
        free(*head);
        *head = NULL;
        *tail = NULL;
    }
    else
    {

    }
}

void DeleteAtPos(PPNODE head, PPNODE tail,int ipos){}

void Display(PNODE head, PNODE tail)
{
    if(head == NULL && tail == NULL)
    {
        printf("Linked List is empty\n");
        return;
    }
    
    printf("Elements of LinkedList are : \n");

    do
    {
        printf("| %d | -> ",head->data);
        head = head -> next;
    }while(head != tail -> next);

    printf("\n");
}

int Count(PNODE head, PNODE tail)
{
    int iCount = 0;

    if(head == NULL && tail == NULL)
    {
        return 0;
    }

    do
    {
        iCount++;
        head = head -> next;
    }while(head != tail -> next);

    return iCount;
}

int main()
{
    PNODE first = NULL;
    PNODE last = NULL;
    int iRet = 0;

    InsertFirst(&first,&last,51);
    InsertFirst(&first,&last,21);
    InsertFirst(&first,&last,11);
    
    InsertLast(&first,&last,101);
    InsertLast(&first,&last,111);
    InsertLast(&first,&last,121);
    
    Display(first,last);
    iRet = Count(first,last);

    printf("Number of elements are : %d\n",iRet);

    DeleteFirst(&first,&last);
    Display(first,last);
    iRet = Count(first,last);

    printf("Number of elements are : %d\n",iRet);

    return 0;
}