#include<iostream>
using namespace std;

typedef struct node
{
    int data;
    int no;
}NODE,*PNODE;

class stack
{
    public:
        PNODE head;
        int iCount;

        stack()
        {
            head = NULL;
            iCount = 0;
        }

        void push(int no)
        {}

        int pop()
        {}

        void Disply()
        {}

        int iCount()
        {
            return iCount;
        }
};

int main()
{

    return 0;
}