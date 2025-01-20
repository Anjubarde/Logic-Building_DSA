
class node
{
    public int data;
    public node next;
}

class SinglyLL
{
    public node head;
    public int iCount;

    public SinglyLL()
    {
        head = null;
        iCount = 0;
    }

    public void InsertFirst(int no)
    {
        node newn = null;

        newn = new node();
        newn.data = no;
        newn.next = null;

        if(head == null)
        {
            head = newn;
        }
        else
        {
            newn.next = head;
            head = newn;
        }
        iCount++;
    }
}

class program504
{
    public static void main(String Arg[])
    {
        SinglyLL sobj = new SinglyLL();

        sobj.InsertFirst(51);
        sobj.InsertFirst(21);
        sobj.InsertFirst(11);
        
    }
}