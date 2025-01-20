#include<iostream>
using namespace std;

class Array
{
    public:
        int *Arr;
        int iSize;

        Array(int length)
        {
            iSize = length;
            Arr = new int[iSize];
        }

        ~Array()
        {
            delete []Arr;
        }

        void Accept()
        {
            int i = 0;
            cout<<"Please enter the values : \n";
            for(i = 0; i < iSize; i++)
            {
                cin>>Arr[i];
            }
        }

        void Display()
        {
            int i = 0;
            cout<<"Elements of the array are : \n";
            for(i = 0; i < iSize; i++)
            {
                cout<<Arr[i]<<"\n";
            }
        }
};

int main()
{
    Array aobj(5);

    aobj.Accept();
    aobj.Display();

    return 0;
}