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
}

void Display(PNODE head)
{
}

int main()
{
    PNODE first = NULL;

    InsertFirst(&first,51);
    InsertFirst(&first,21);
    InsertFirst(&first,11);

    Display(first);
    
    return 0;
}