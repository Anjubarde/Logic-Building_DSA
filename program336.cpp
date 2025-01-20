#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

class SinglyLL
{
    public:
        PNODE head;
        int iCount;

        SinglyLL()
        {
            head = NULL;
            iCount = 0;
        }

        void InsertFirst(int no)
        {
            PNODE newn = NULL;

            newn = new NODE;    
            newn->data = no;
            newn->next = NULL;

            if(head == NULL)
            {
                head = newn;
            }
            else
            {
                newn->next = head;
                head = newn;
            }
            iCount++;
        }

        void InsertLast(int no)
        {
            PNODE newn = NULL;
            PNODE temp = NULL;

            newn = new NODE;   
            newn->data = no;
            newn->next = NULL;

            if(head == NULL)
            {
                head = newn;
            }
            else
            {
                temp = head;

                while(temp -> next != NULL)
                {
                    temp = temp -> next;
                }

                temp->next = newn;
            }
            iCount++;
        }
        
        void InsertAtPos(int no , int ipos){}
        void DeleteFirst(){}
        void DeleteLast(){}
        void DeleteAtPos(int ipos){}

        void Display()
        {
            PNODE temp = head;

            cout<<"Elements of LinkedList are : \n";

            while(temp != NULL)
            {
                cout<<"| "<<temp->data<<" | -> ";
                temp = temp -> next;
            }

            cout<<"NULL\n";
        }
        
        int Count()
        {
            return iCount;
        }
};

int main()
{
    SinglyLL sobj;
    int iRet = 0;

    sobj.InsertFirst(51);
    sobj.InsertFirst(21);
    sobj.InsertFirst(11);
    
    sobj.Display();
    
    iRet = sobj.Count();
    cout<<"Number of elements are : "<<iRet<<"\n";

    sobj.InsertLast(101);
    sobj.InsertLast(111);
    sobj.InsertLast(121);

    sobj.Display();
    
    iRet = sobj.Count();
    cout<<"Number of elements are : "<<iRet<<"\n";

    return 0;
}