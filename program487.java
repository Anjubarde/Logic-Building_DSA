import java.io.*;
import java.util.*;

class program487
{
    public static void main(String Arg[])
    {
        String Header = "First.txt 10                                                                                        ";

        System.out.println("Header length is : "+Header.length());

        Header = Header.trim();

        System.out.println("Header length after trim is : "+Header.length());

        String Arr[] = Header.split(" ");

        System.out.println("Number of tokens : "+Arr.length);
    }
}