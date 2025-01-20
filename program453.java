import java.io.*;
import java.util.*;

class program453
{
    public static void main(String Arg[])
    {
        try
        {
            boolean bret = false;
            Scanner sobj = new Scanner(System.in);

            System.out.println("Enter the file name that you want to create : ");
            String name = sobj.nextLine();

            File fobj = new File(name);

            if(fobj.exists())
            {
                System.out.println("File is already existing in the folder");
            }
            else
            {
                bret = fobj.createNewFile();

                if(bret == true)
                {
                    int iRet = 0;

                    System.out.println("File succesfully created");

                    FileOutputStream foobj = new FileOutputStream(fobj);
                    String str = "Jay Ganesh...";

                    iRet = foobj.write(str.getBytes());

                    System.out.println("Return value of write is : "+iRet);
                }
                else
                {
                    System.out.println("Unable to create the file");
                }
            }
        }
        catch(Exception eobj)
        {
            System.out.println("Exception occured.."+eobj);
        }

    }
}