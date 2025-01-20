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

void InsertLast(PPNODE head, int no)
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

        while(temp -> next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newn;
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

void DeleteFirst(PPNODE head)
{
    PNODE temp = NULL;

    if(*head == NULL)
    {
        return;
    }
    if((*head) -> next == NULL)
    {
        free(*head);
        *head = NULL;
    }
    else
    {
        temp = *head;
        *head = (*head) ->next;
        free(temp);
    }
}

void DeleteLast(PPNODE head)
{
    PNODE temp = NULL;

    if(*head == NULL)
    {
        return;
    }
    if((*head) -> next == NULL)
    {
        free(*head);
        *head = NULL;
    }
    else
    {
        temp = *head;
        
        while(temp -> next->next != NULL)
        {
            temp = temp -> next;
        }
        free(temp->next);
        temp->next = NULL;
    }
}

void InsertAtPos(PPNODE head, int no, int ipos)
{
    int CountNode = 0;
    int i = 0;

    PNODE newn = NULL;
    PNODE temp = NULL;

    CountNode = Count(*head);

    if((ipos < 1) || (ipos > CountNode+1))  // Filter
    {
        printf("Invalid position\n");
        return;
    }
 
    if(ipos == 1)                       // Pos == 1
    {
        InsertFirst(head, no);
    }
    else if(ipos == CountNode + 1)      // Pos == Last
    {
        InsertLast(head, no);
    }
    else                                // In between position
    {
        newn = (PNODE)malloc(sizeof(NODE));
        newn->data = no;
        newn->next = NULL;

        temp = *head;

        for(i = 1; i < ipos-1; i++)
        {
            temp = temp -> next;
        }

        newn->next = temp->next;
        temp->next = newn;
    }
}

void DeleteAtPos(PPNODE head, int ipos)
{
    int CountNode = 0;
    int i = 0;

    PNODE temp = NULL;
    PNODE target = NULL;

    CountNode = Count(*head);

    if((ipos < 1) || (ipos > CountNode))  // Filter
    {
        printf("Invalid position\n");
        return;
    }
 
    if(ipos == 1)                       // Pos == 1
    {
        DeleteFirst(head);
    }
    else if(ipos == CountNode)      // Pos == Last
    {
        DeleteLast(head);
    }
    else                                // In between position
    {
        temp = *head;

        for(i = 1; i < ipos - 1; i++)
        {
            temp = temp->next;
        }

        target = temp->next;

        temp->next = target->next;
        free(target);
    }
}

int main()
{
    PNODE first = NULL;
    int iRet = 0, iValue = 0, iPos = 0;
    int iOption = 0;

    while(1)
    {
        printf("_____________________________________________________\n");
        printf("1 : Insert new element at first position\n");
        printf("2 : Insert new element at last position\n");
        printf("3 : Insert new element at given position\n");
        printf("4 : Delete the element from first position\n");
        printf("5 : Delete the element from last position\n");
        printf("6 : Delete the element from the given position\n");
        printf("7 : Display the elements\n");
        printf("8 : Count the elements\n");
        printf("9 : Terminate the application\n");
        printf("_____________________________________________________\n");
        printf("Please select the targetaed operation : \n");
        scanf("%d",&iOption);
        printf("_____________________________________________________\n");

        if(iOption == 1)
        {
            printf("Enter the element : \n");
            scanf("%d",&iValue);

            InsertFirst(&first,iValue);
            printf("Element inserted succesfully..\n");
        }
        else if(iOption == 2)
        {
            printf("Enter the element : \n");
            scanf("%d",&iValue);

            InsertLast(&first,iValue);
            printf("Element inserted succesfully..\n");
        }
        else if(iOption == 3)
        {
            printf("Enter the element : \n");
            scanf("%d",&iValue);

            printf("Enter the position\n");
            scanf("%d",&iPos);
            InsertAtPos(&first,iValue,iPos);
            printf("Element inserted succesfully..\n");
        }
        else if(iOption == 4)
        {
            DeleteFirst(&first);
            printf("Element deleted succesfully\n");
        }
        else if(iOption == 5)
        {
            DeleteLast(&first);
            printf("Element deleted succesfully\n");
        }
        else if(iOption == 6)
        {
            printf("Enter the position\n");
            scanf("%d",&iPos);

            DeleteAtPos(&first,iPos);
            printf("Element deleted succesfully\n");
        }
        else if(iOption == 7)
        {
            printf("Elements of the linkedList are : \n");
            Display(first);
        }
        else if(iOption == 8)
        {
            iRet = Count(first);
            printf("Number of elements in the linkedList are : %d\n",iRet);
        }
        else if(iOption == 9)
        {
            printf("Thank you for using the application\n");
            break;
        }
        else
        {
            printf("Invalid option\n");
        }
    }   // end of while

    return 0;
}