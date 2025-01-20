import java.util.*;

class program536
{
    public static void main(String Arg[])
    {
        LinkedList <Integer>lobj = new LinkedList<Integer>();

        lobj.add(11);
        lobj.add(21);
        lobj.add(51);
        
        System.out.println(lobj);

        for(Integer no : lobj)
        {
            System.out.println(no);
        }
    }
}