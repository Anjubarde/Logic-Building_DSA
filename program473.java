import java.io.*;
import java.util.*;

class program473
{
    public static void main(String Arg[]) throws Exception
    {
        String Header = "abcdefghijkl";

        System.out.println("Header length is : "+Header.length());

        int i = 0;

        for(i = Header.length(); i< 100; i++)
        {
            Header = Header + " ";
        }

        System.out.println("Updated Header length is : "+Header.length());
    }
}