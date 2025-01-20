import java.util.*;

class program545
{
    public static void main(String Arg[])
    {
        LinkedList <Integer>lobj = new LinkedList<Integer>();

        lobj.addFirst(51);
        lobj.addFirst(21);
        lobj.addFirst(11);
        
        lobj.addLast(101);
        lobj.addLast(111);
        lobj.addLast(121);

        lobj.add(3,75);
        
        for(Integer no : lobj)
        {
            System.out.println(no);
        }

        System.out.println("Size of linked list is : "+lobj.size());

        lobj.clear();
    }
}

/*
    add()    
    add(int)
    addFirst()
    addLast()
    remove()
    remove(int)
    removeFirst()
    removeLast()
    set()
    clear()
    size()
    get()
    contains()

*/