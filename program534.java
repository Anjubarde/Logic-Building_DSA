import java.util.*;

class program534
{
    public static void InsertionSort(int Brr[])
    {
        int i = 0, j = 0, k = 0;
        int selected = 0;

        for(i = 1 ; i< Brr.length; i++)
        {
            for(j = i -1, selected = Brr[i]; ((j >= 0) && (Brr[j] > selected)); j--)
            {
                Brr[j+1] = Brr[j];
            }
            Brr[j+1] = selected;
        }

    }

    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in); 
        int i = 0, iSize = 0;

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

        InsertionSort(Arr);

        System.out.println("Elements of the array after sorting : ");

        for(i = 0; i < iSize; i++)
        {
            System.out.print(Arr[i]+"\t");
        }
        System.out.println();
       
    }
}
