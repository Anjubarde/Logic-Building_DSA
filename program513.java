
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

class Queue
{
    public node head;
    public int iCount;

    public Queue()
    {
        head = null;
        iCount = 0;
    }
    
    public void Enqueue(int no)
    {
        node newn = null;

        newn = new node(no);

        if(head == null)
        {
            head = newn;
        }
        else
        {
            node temp = head;

            while(temp.next != null)
            {
                temp = temp.next;
            }

            temp.next = newn;
        }
        iCount++;
    }

    public void Display()
    {
        System.out.println("Elements of the Queue are : ");

        node temp = head;

        while(temp != null)
        {
            System.out.print("|"+temp.data+"|->");
            temp = temp.next;
        }
        System.out.println("null");
    }

    public int Count()
    {
        return iCount;
    }

    public int Dequeue()
    {
        int no = 0;

        if(head == null)
        {
            System.out.println("Queue is empty");
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

class program513
{
    public static void main(String Arg[])
    {
        Queue sobj = new Queue();
        int iRet = 0;

        sobj.Enqueue(11);
        sobj.Enqueue(21);
        sobj.Enqueue(51);
        sobj.Enqueue(101);
        sobj.Enqueue(111);
        sobj.Enqueue(121);
        
        sobj.Display();
        iRet = sobj.Count();

        System.out.println("Number of elements in the Queue are : "+iRet);

        iRet = sobj.Dequeue();
        System.out.println("Removed element from queue is : "+iRet);

        iRet = sobj.Dequeue();
        System.out.println("Removed element from queue is : "+iRet);

        sobj.Display();
        iRet = sobj.Count();

        System.out.println("Number of elements in the Queue are : "+iRet);
    }
}