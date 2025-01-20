import java.util.*;

class Employee
{
    public int Eno;
    public String Ename;
    public int Eage;
    public String Eaddress;
    public int Esalary;

    public static int Counter;

    static
    {
        Counter = 1;
    }

    public Employee(String B, int C, String D, int E)
    {
        Eno = Counter++;
        Ename = B;
        Eage = C;
        Eaddress = D;  
        Esalary = E;
    }

    public void DisplayInforation()
    {
        System.out.println(Eno+"\t"+Ename+"\t"+Eaddress+"\t\t  "+Eage+"\t"+Esalary);
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

    // insert into  employee values("Piyush",34,"Pune",11000);
    public void InsertIntoTable(String name, int age, String address, int salary)
    {
        Employee eobj = new Employee(name,age,address,salary);
        lobj.addLast(eobj);
        System.out.println("Record inserted succesfully into the table");
    }

    // select * from Emplyee;
    public void SelectStarFrom()
    {
        System.out.println("----------------------------------------------------------------");
        System.out.println("No\t Name \t Address \t Age \t Salary ");
        System.out.println("----------------------------------------------------------------");
        for(Employee eref : lobj)
        {
            eref.DisplayInforation();
        }
        System.out.println("----------------------------------------------------------------");
    }

    // Select * from employee where Eno = 3
    public void SelectSpecific(int id)
    {
        for(Employee eref : lobj)
        {
            if(eref.Eno == id)
            {
                eref.DisplayInforation();
                break;
            }
        }
    }

    // Select * from employee where Ename = "Amit"
    public void SelectSpecific(String str)
    {
        for(Employee eref : lobj)
        {
            if(str.equals(eref.Ename))
            {
                eref.DisplayInforation();
                break;
            }
        }
    }

    // delete from Emplyee where Eno = 2
    public void DeleteData(int no)
    {
        int index = 0;
        boolean bFlag = false;

        for(Employee eref : lobj)
        {
            if(eref.Eno == no)
            {
                bFlag = true;
                break;
            }
            index++;
        }  

        if(bFlag == false)
        {
            System.out.println("Unable to remove the element as element is not there in database");
        }
        else
        {
            lobj.remove(index);
        }
    }

    // delete from Employee where Enmae = "Sagar"
    public void DeleteData(String str)
    {
        int index = 0;
        boolean bFlag = false;

        for(Employee eref : lobj)
        {
            if(str.equals(eref.Ename))
            {
                bFlag = true;
                break;
            }
            index++;
        }  

        if(bFlag == false)
        {
            System.out.println("Unable to remove the element as element is not there in database");
        }
        else
        {
            lobj.remove(index);
        }
    }

    // select Count(Eno) from Employee
    public void AggregateCount()
    {
        System.out.println("Number of records in the Employee table : "+Employee.Counter); 
    }

    // select Count(ESalary) from Employee
    public void AggregateSum()
    {
        int iSum = 0;

        for(Employee eref : lobj)
        {
            iSum = iSum + eref.Esalary;
        }

        System.out.println("Summation of records in the Employee table : "+iSum); 
    }

    // select Avg(ESalary) from Employee
        public void AggregateAvg()
    {
        int iSum = 0;

        for(Employee eref : lobj)
        {
            iSum = iSum + eref.Esalary;
        }

        System.out.println("Average of records in the Employee table : "+(iSum/ lobj.size())); 
    }

    // select Max(ESalary) from Employee
    public void AggregateMax()
    {
        int iMax = lobj.get(0).Esalary;

        for(Employee eref : lobj)
        {
            if(eref.Esalary > iMax)
            {
                iMax = eref.Esalary;
            }
        } 

        System.out.println("Maximum of records in the Employee table : "+iMax); 
    }

    // select Min(ESalary) from Employee
    public void AggregateMin()
    {
        int iMin = lobj.get(0).Esalary;

        for(Employee eref : lobj)
        {
            if(eref.Esalary < iMin)
            {
                iMin = eref.Esalary;
            }
        } 

        System.out.println("Minimum of records in the Employee table : "+iMin); 
    }

    // Update Employee Set Address = "Sangli" where Eno = 3;
    public void UpdateRecord(int no, String address)
    {
        int index = 0;

        for(Employee eref : lobj)
        {
            if(eref.Eno == no)
            {
                eref.Eaddress = address;
                lobj.set(index,eref);
                break;
            }
            index++;
        }
    }
}

class program568
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Welcome to Marvellous DBMS");

        MarvellousDBMS mobj = new MarvellousDBMS();

        int iOption = 0;
        
        while(true)
        {
            System.out.println("-----------------------------------------------------");
            System.out.println("Please select your option based on your requirement");

            System.out.println("1 : Insert new record in the table");
            System.out.println("2 : Display all records from the table");
            System.out.println("3 : Display specific record from the table with ID");
            System.out.println("4 : Display specific record from the table with Name");
            System.out.println("5 : Delete the record from table with Name");
            System.out.println("6 : Count number of records from the table");
            System.out.println("7 : Summation of all records salaray");
            System.out.println("8 : Average of all records salaray");
            System.out.println("9 : Maximum of all records salaray");
            System.out.println("10 : Minimum of all records salaray");                
            System.out.println("11 : Update the existing record");     
            System.out.println("12 : Delete the table");
            System.out.println("13 : Terminate the Marvellous DBMS");
                       
            System.out.println("-----------------------------------------------------");
        }
    }
}