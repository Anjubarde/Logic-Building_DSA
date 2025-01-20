#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

int main()
{
    struct node obj;            // object
    struct node *ptr = &obj;    // pointer

    obj.data = 11;
    ptr->data = 11;

    obj.next = NULL;
    ptr->next = NULL;

    printf("Value is : %d\n",obj.data);
    printf("Value is : %d\n",ptr->data);
    
    return 0;
}