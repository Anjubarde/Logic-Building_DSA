import java.util.*;

class Employee
{
    public int Eno;
    public String Ename;
    public int Eage;
    public String Eaddress;
    public int Esalary;

    public Employee(int A, String B, int C, String D, int E)
    {
        Eno = A;
        Ename = B;
        Eage = C;
        Eaddress = D;  
        Esalary = E;
    }

    public void DisplayInforation()
    {
        System.out.println("Employee no : "+Eno+" Name : "+Ename+" Address : "+Eaddress+" Age : "+Eage+" Salary : "+Esalary);
    }
}

class MarvellousDBMS
{
    public LinkedList <Employee>lobj;

    public MarvellousDBMS()
    {
        System.out.println("Marvellous DBMS started succesfully..");
        lobj = new LinkedList<Employee>();
    }

    protected void finalize()
    {
        System.out.println("Deallocating all resources of Marvellous DBMS...");
        lobj.clear();
        lobj = null;
    }
}

class program550
{
    public static void main(String Arg[])
    {
        MarvellousDBMS mobj = new MarvellousDBMS();


        mobj = null;
        System.gc();
    }
}