// 883042
// 0 : 1
// 2 : 1
// 3 : 1
// 4 : 1
// 8 : 2

import java.util.*;

class Digits
{
    public void CountDigits(int iNo)
    {
        int iCount[] = {0,0,0,0,0,0,0,0,0,0};
        int iDigit = 0, i = 0;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iCount[iDigit]++;
            iNo = iNo / 10;
        }

        for(i = 0; i<= 9; i++)
        {
            if(iCount[i] != 0)
            {
                System.out.println("Frequency of "+i+" is : "+iCount[i]);
            }
        }
    }
}

class program252
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        int iValue = 0;
        
        System.out.println("Enter number : ");
        iValue = sobj.nextInt();

        Digits dobj = new Digits();
        dobj.CountDigits(iValue);

    }
}