import java.io.*;
import java.util.*;

class program480
{
    public static void main(String Arg[]) throws Exception
    {
        String DirName = "", PackName = "", Header = "";
        FileOutputStream fopackobj = null;
        FileInputStream fiobj = null;
        int i = 0, j = 0,iRet = 0;
        boolean bret = false;
        Scanner sobj = null;
        File Packobj = null;
        File fobj = null;

        sobj = new Scanner(System.in);
        byte Buffer[] = new byte[1024];

        System.out.println("---------------------------------------------------------------------");
        System.out.println("-------------- Marvellous Packer Unpacker CUI Module ----------------");
        System.out.println("---------------------------------------------------------------------");
        

        System.out.println("---------------------------- Packing Activity -----------------------");

        System.out.println("Enter the name of directory that you want to open for packing : ");
        DirName = sobj.nextLine();

        System.out.println("Enter the name of packed file that you want to create : ");
        PackName = sobj.nextLine();
        
        Packobj = new File(PackName);
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

        fopackobj = new FileOutputStream(Packobj);

        fobj = new File(DirName);

        if(fobj.exists())
        {
            System.out.println("Directory is succesfully opened");

            File Arr[] = fobj.listFiles();

            System.out.println("Total number of files in the Directory are : "+Arr.length);

            for(i = 0; i < Arr.length; i++)
            {
                Header = Arr[i].getName()+" "+Arr[i].length();
                
                for(j = Header.length(); j < 100; j++)
                {
                    Header = Header + " ";
                }

                fopackobj.write(Header.getBytes(),0,100);

                fiobj = new FileInputStream(Arr[i]);

                while((iRet = fiobj.read(Buffer)) != -1)
                {
                    fopackobj.write(Buffer,0,iRet);
                }

                fiobj.close();
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