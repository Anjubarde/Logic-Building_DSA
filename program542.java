import java.util.*;

class program542
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

        lobj.removeFirst();
        lobj.removeLast();

        for(Integer no : lobj)
        {
            System.out.println(no);
        }

        lobj.clear();
    }
}