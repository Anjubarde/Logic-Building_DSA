    #include<stdio.h>

    void Display(int iNo)
    {
        int iCnt = 0;
        //      1          2         3     
        for(iCnt = 1; iCnt <=iNo; iCnt++)
        {
            printf("%d\n",iCnt);    // 4
        }
    }

    int main()
    {
        int iFrequency = 0;

        printf("Enter the frequency : \n");
        scanf("%d",&iFrequency);

        Display(iFrequency);

        return 0;
    }

