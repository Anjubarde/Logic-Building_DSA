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

void InsertFirst(PPNODE head, int no)
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

void Display(PNODE head)
{
    printf("Elements of LinkedList are : \n");

    while(head != NULL)
    {
        printf("| %d |->",head->data);
        head = head->next;
    }
    printf("NULL\n");
}

int Count(PNODE head)
{
    int iCount = 0;

    while(head != NULL)
    {
        iCount++;
        head = head -> next;
    }

    return iCount;
}

void MiddleElement(PNODE head)
{
    int iCount = 0, i = 0;
    PNODE temp = head;

    while(temp != NULL)
    {
        iCount++;
        temp = temp->next;
    }

    temp = head;

    for(i =1; i <= iCount/2; i++)
    {
        temp = temp->next;
    }

    printf("Middle element is : %d\n",temp->data);

}

int main()
{
    PNODE first = NULL;
    int iRet = 0, iValue = 0, iPos = 0;
    int iOption = 0;

    InsertFirst(&first,121);
    InsertFirst(&first,111);
    InsertFirst(&first,101);
    InsertFirst(&first,51);
    InsertFirst(&first,21);
    InsertFirst(&first,11);
    
    Display(first);

    MiddleElement(first);

    return 0;
}