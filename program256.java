import java.util.*;

class program256
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        int iSize = 0, i = 0;

        System.out.println("Enter the number of elements : ");  // Step 1
        iSize = sobj.nextInt();

        int Arr[] = new int[iSize];                             // Step 2

        System.out.println("Enter the elements : ");
        for(i = 0; i < Arr.length; i++)                              // Step 3
        {
            Arr[i] = sobj.nextInt();
        }
                                                                // Logic Step 4
        System.out.println("Elements of the array are : ");
        for(i = 0; i < Arr.length; i++)
        {
            System.out.println(Arr[i]);
        }
                                                                // Deallocation Step 5
    }
}