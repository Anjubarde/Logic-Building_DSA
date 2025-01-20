import java.util.*;

class program525
{
    public static boolean LinearSearch(int Brr[], int iNo)
    {
        int i = 0;

        for(i = 0; i < Brr.length; i++)
        {
            if(Brr[i] == iNo)
            {
                break;
            }
        }

        if(i < Brr.length)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in); 
        int i = 0, iSize = 0, iValue = 0;
        boolean bRet = false;

        System.out.println("Enter the number of elements : ");
        iSize = sobj.nextInt();

        int Arr[] = new int[iSize];

        System.out.println("Enter the values : ");

        for(i = 0; i < iSize; i++)
        {
            Arr[i] = sobj.nextInt();
        }

        System.out.println("Elements of the array are : ");

        for(i = 0; i < iSize; i++)
        {
            System.out.print(Arr[i]+"\t");
        }
        System.out.println();

        System.out.println("Enter the element that you want to search : ");
        iValue = sobj.nextInt();

        bRet = LinearSearch(Arr,iValue);

        if(bRet == true)
        {
            System.out.println("Elment is present in the array");
        }
        else
        {
            System.out.println("There is no such element in the array");
        }
    }
}