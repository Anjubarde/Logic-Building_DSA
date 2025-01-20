import java.util.*;
// A = 10   B = 2
// 100

// A = 5   B = 3
// 125

class Arithematic
{
    public long Power(int A, int B)
    {
        int iCnt = 0;
        long iMult = 1;

        for(iCnt = 1; iCnt <= B; iCnt++)
        {
            iMult = iMult * A;
        }
        return iMult;
    }
}

class program237
{
    public static void main(String A[])
    {
        int iNo1 = 0, iNo2 = 0;
        long iAns = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter base  : ");
        iNo1 = sobj.nextInt();

        System.out.println("Enter index : ");
        iNo2 = sobj.nextInt();

        Arithematic aobj = new Arithematic();
        iAns = aobj.Power(iNo1, iNo2);

        System.out.println("Result is : "+iAns); 
    }
}

/*
    A = 10
    B = 5;

    Ans

    10 * 10 * 10 * 10 * 10

    Ans = Ans * 10;
    Ans = Ans * 10;
    Ans = Ans * 10;
    Ans = Ans * 10;
    Ans = Ans * 10;
    
*/