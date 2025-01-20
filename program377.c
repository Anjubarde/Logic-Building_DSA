#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
}NODE, *PNODE, **PPNODE;

void enqueue(PPNODE head, int no) // InsertLast
{
    PNODE newn = NULL;
    PNODE temp = NULL;

    newn = (PNODE)malloc(sizeof(NODE));
    newn->data = no;
    newn->next = NULL;

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
    }
}

int dequeue(PPNODE head)    // DeleteFirst
{
    int no = -1;
    PNODE temp = NULL;

    if(*head == NULL)   // Empty
    {
        printf("Queue is empty\n");
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
{
    printf("Elements of Queue are : \n");

    while(head != NULL)
    {
        printf("| %d |\n",head->data);
        head = head->next;
    }
}

int Count(PNODE head)
{
    int iCount = 0;

    while(head != NULL)
    {
        iCount++;
        head = head->next;
    }
    return iCount;
}

int main()
{
    PNODE first = NULL;
    int iRet = 0;

    enqueue(&first,101);
    enqueue(&first,51);
    enqueue(&first,21);
    enqueue(&first,11);
    
    Display(first);

    iRet = dequeue(&first);
    printf("Removed element is : %d\n",iRet);

    Display(first);

    iRet = dequeue(&first);
    printf("Removed element is : %d\n",iRet);
    
    Display(first);

    iRet = Count(first);
    printf("Number of elements are : %d\n",iRet);
    
    return 0;
}