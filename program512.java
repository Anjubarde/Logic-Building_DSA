
class node
{
    public int data;
    public node next;

    public node(int x)
    {
        data = x;
        next = null;
    }
}

class Stack
{
    public node head;
    public int iCount;

    public Stack()
    {
        head = null;
        iCount = 0;
    }

    public void Push(int no)
    {
        node newn = null;

        newn = new node(no);

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

    public void Display()
    {
        System.out.println("Elements of the Stack are : ");

        node temp = head;

        while(temp != null)
        {
            System.out.println(temp.data);
            temp = temp.next;
        }
    }

    public int Count()
    {
        return iCount;
    }

    public int Pop()
    {
        int no = 0;

        if(head == null)
        {
            System.out.println("Stack is empty");
            return -1;
        }
        else if(head.next == null)
        {
            no = head.data;
            head = null;
            System.gc();
        }
        else
        {
            no = head.data;
            head = head.next;
            System.gc();
        }
        
        iCount--;

        return no;
    }
}

class program512
{
    public static void main(String Arg[])
    {
        Stack sobj = new Stack();
        int iRet = 0;

        sobj.Push(111);
        sobj.Push(101);
        sobj.Push(51);
        sobj.Push(21);
        sobj.Push(11);

        sobj.Display();
        iRet = sobj.Count();

        System.out.println("Number of elements in the stack are : "+iRet);

        iRet = sobj.Pop();
        System.out.println("Poped element is : "+iRet);
        
        iRet = sobj.Pop();
        System.out.println("Poped element is : "+iRet);

        sobj.Display();
        iRet = sobj.Count();

        System.out.println("Number of elements in the stack are : "+iRet);
    }
}