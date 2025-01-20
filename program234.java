import java.util.*;

class Rectagle
{
    public int CalculateArea(int A, int B)
    {
        int iArea = 0;
        iArea = A * B;
        return iArea;
    }
}

class program234
{
    public static void main(String A[])
    {
        int iNo1 = 0, iNo2 = 0;
        float fAns = 0.0f;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter length  : ");
        iNo1 = sobj.nextInt();

        System.out.println("Enter breadth : ");
        iNo2 = sobj.nextInt();

        Rectagle robj = new Rectagle();
        fAns = robj.CalculateArea(iNo1, iNo2);

        System.out.println("Area is : "+fAns); 
    }
}
