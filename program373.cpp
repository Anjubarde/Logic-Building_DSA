#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;

class SinglyCL
{
    public:
        PNODE head;
        PNODE tail;
        int iCount;

        SinglyCL()
        {
            head = NULL;
            tail = NULL;
            iCount = 0;
        }

        void InsertFirst(int no){}
        void InsertLast(int no){}
        void InsertAtPos(int no, int ipos){}
        
        void DeleteFirst(){}
        void DeleteLast(){}
        void DeleteAtPos(int ipos){}

        void Display(){}
        int Count()
        {
            return iCount;
        }
};

int main()
{
    SinglyCL obj;
    int iRet = 0;

    obj.InsertFirst(51);
    obj.InsertFirst(21);
    obj.InsertFirst(11);
    
    obj.InsertLast(101);
    obj.InsertLast(111);
    obj.InsertLast(121);
    
    obj.InsertAtPos(75,4);

    obj.Display();
    iRet = obj.Count();

    cout<<"Number of elements are : "<<iRet<<"\n";

    obj.DeleteAtPos(4);

    obj.Display();
    iRet = obj.Count();

    cout<<"Number of elements are : "<<iRet<<"\n";

    obj.DeleteFirst();
    obj.DeleteLast();
    
    obj.Display();
    iRet = obj.Count();

    cout<<"Number of elements are : "<<iRet<<"\n";

    return 0;
}