import java.util.*;

class Matrix
{
    public int Arr[][];

    public Matrix(int iRow, int iCol)
    {
        Arr = new int[iRow][iCol];
    }

    public void Accept()
    {
        System.out.println("Please enter the values : ");

        Scanner sobj = new Scanner(System.in);
        int i = 0, j = 0;

        for(i = 0; i < Arr.length;i++)
        {
            for(j = 0; j < Arr[i].length; j++)
            {
                Arr[i][j] = sobj.nextInt();
            }
        }
    }

    public void Display()
    {
        System.out.println("Elements of the matrix are : ");
        int i = 0, j = 0;

        for(i = 0; i < Arr.length;i++)
        {
            for(j = 0; j < Arr[i].length; j++)
            {
                System.out.print(Arr[i][j]+"\t");
            }
            System.out.println();
        }
    }

    public int Summation()
    {
        int iSum = 0;
        int i = 0, j = 0;

        for(i = 0; i < Arr.length;i++)
        {
            for(j = 0; j < Arr[i].length; j++)
            {
                iSum = iSum + Arr[i][j];
            }
        }
        return iSum;
    }

    public int CountEven()
    {
        int iCount = 0;
        int i = 0, j = 0;

        for(i = 0; i < Arr.length;i++)
        {
            for(j = 0; j < Arr[i].length; j++)
            {
                if((Arr[i][j] % 2) == 0)
                {
                    iCount++;
                }
            }
        }
        return iCount;
    }


    public int SumEven()
    {
        int iSum = 0;
        int i = 0, j = 0;

        for(i = 0; i < Arr.length;i++)
        {
            for(j = 0; j < Arr[i].length; j++)
            {
                if((Arr[i][j] % 2) == 0)
                {
                    iSum = iSum + Arr[i][j];
                }
            }
        }
        return iSum;
    }

    public void DigitsCount()
    {
        int iCount = 0, iNo = 0;
        int i = 0, j = 0;

        for(i = 0; i < Arr.length;i++)
        {
            for(j = 0; j < Arr[i].length; j++)
            {
                iNo = Arr[i][j];
                while(iNo != 0)
                {
                    iCount++;
                    iNo = iNo / 10;
                }
                System.out.println("Number of digits in "+Arr[i][j]+" is : "+iCount);
                iCount = 0;
            }
        }
    }

    public void DigitsSum()
    {
        int iSum = 0, iNo = 0, iDigit = 0;
        int i = 0, j = 0;

        for(i = 0; i < Arr.length;i++)
        {
            for(j = 0; j < Arr[i].length; j++)
            {
                iNo = Arr[i][j];
                while(iNo != 0)
                {
                    iDigit = iNo % 10;
                    iSum = iSum + iDigit;
                    iNo = iNo / 10;
                }
                System.out.println("Sum of digits of "+Arr[i][j]+" is : "+iSum);
                iSum = 0;
            }
        }
    }
}

class program579
{
    public static void main(String Arg[])
    {
        int iRow = 0, iCol = 0, iRet = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Please enter number of rows : ");
        iRow = sobj.nextInt();

        System.out.println("Please enter number of columns : ");
        iCol = sobj.nextInt();
        
        Matrix mobj = new Matrix(iRow,iCol);

        mobj.Accept();
        mobj.Display();
        mobj.DigitsSum();
    }
}