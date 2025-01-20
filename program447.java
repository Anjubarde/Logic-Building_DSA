import java.io.*;

class program447
{
    public static void main(String Arg[])
    {
        try
        {
            boolean bret = false;

            File fobj = new File("Demo.txt");

            bret = fobj.createNewFile();

            if(bret == true)
            {
                System.out.println("File succesfully created");
            }
            else
            {
                System.out.println("Unable to create the file");
            }
        }
        catch(Exception eobj)
        {
            System.out.println("Exception occured.."+eobj);
        }

    }
}