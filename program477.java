import java.io.*;
import java.util.*;

class program477
{
    public static void main(String Arg[]) throws Exception
    {
        System.out.println("---------------------------------------------------------------------");
        System.out.println("-------------- Marvellous Packer Unpacker CUI Module ----------------");
        System.out.println("---------------------------------------------------------------------");
        
        Scanner sobj = new Scanner(System.in);

        System.out.println("---------------------------- Packing Activity -----------------------");

        System.out.println("Enter the name of directory that you want to open for packing : ");
        String DirName = sobj.nextLine();

        System.out.println("Enter the name of packed file that you want to create : ");
        String PackName = sobj.nextLine();

        File Packobj = new File(PackName);
        boolean bret = false;

        bret = Packobj.createNewFile();
        if(bret == true)
        {
            System.out.println("Packed file gets succesfully created with the name : "+PackName);
        }
        else
        {
            System.out.println("Unable to proceed as pack file is not created");
            return;
        }

        FileOutputStream fopackobj = new FileOutputStream(Packobj);

        File fobj = new File(DirName);

        if(fobj.exists())
        {
            System.out.println("Directory is succesfully opened");

            File Arr[] = fobj.listFiles();

            System.out.println("Total number of files in the Directory are : "+Arr.length);

            int i = 0, j = 0;

            String Header = "";

            for(i = 0; i < Arr.length; i++)
            {
                Header = Arr[i].getName()+" "+Arr[i].length();
                
                for(j = Header.length(); j < 100; j++)
                {
                    Header = Header + " ";
                }

                fopackobj.write(Header,0,100);

                Header = "";
            }
        }
        else
        {
            System.out.println("There is no such director");
        }
        System.out.println("---------------------------------------------------------------------");

    }
}